
    //Memory settings
    uint8_t i=0;
    const uint8_t s=64;

    uint8_t *ADCregH;
    uint8_t *ADCregL;
    uint8_t ADCreg[s];

void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(115200);
  while(!Serial){};
  Serial.println("Begin");
  ///***** ADC configuration*******
    //Clock configuration
    uint8_t *clkctrl; clkctrl = (uint8_t *) (0x40000C02UL); *clkctrl=(int8_t) 30; //set clckctrl register to 30 - ADC
    GCLK->CLKCTRL.bit.GEN = 0x3; //Change to clock generator 3
    while (GCLK->STATUS.reg & GCLK_STATUS_SYNCBUSY );
    //Bus configuration
    PM->APBCMASK.bit.ADC_=0x01; //enable APBCmask - already enabled by ArduinoCore with settings.
    //Reference settings
    ADC->REFCTRL.bit.REFSEL=0x2; //1/2 VDDANA (only for VDDANA > 2.0V)
    ADC->REFCTRL.bit.REFCOMP=0x00; //Reference buffer offset
    //Averaging control   
    ADC->AVGCTRL.bit.SAMPLENUM=0x00; //1 sample take, no addition
    ADC->AVGCTRL.bit.ADJRES=0x00; //no division as only 1 sample
    // Sampling control
    ADC->SAMPCTRL.bit.SAMPLEN=1; //no delay immedatie sampling
    // ADC settings
    ADC->CTRLB.bit.DIFFMODE=0x00; //no differential mode
    ADC->CTRLB.bit.LEFTADJ=0x00; //no left adjustment
    ADC->CTRLB.bit.FREERUN=0x01; //free run mode
    ADC->CTRLB.bit.CORREN=0x00; //enable gain and offset correction (set in seperate register)
    ADC->CTRLB.bit.RESSEL=0x0; //12-bit - 16 would mean oversampling, ie. time trade-off
    ADC->CTRLB.bit.PRESCALER=0x00; //Division by 4 - highest value: 8Mhz/4=2Mhz, max. operating mode f(GCK_ADC)
    ADC->WINCTRL.bit.WINMODE=0x00; //no window mode enabled
    ADC->CTRLA.bit.RUNSTDBY=0x00; //no running on standby
    //input control
    ADC->INPUTCTRL.bit.MUXPOS=0x0A; //pinA1 (ie. PB02 ie. AIN10) - take a pin that draws voltage from VADDA as otherwise accuracy may drop
    ADC->INPUTCTRL.bit.MUXNEG=0x18;  //ground as no differential - here internal is choosen, alt. I/O GND is that off digital path?? while GND = VADAGND??
    ADC->INPUTCTRL.bit.INPUTSCAN=0x00; //no pin scan
    ADC->INPUTCTRL.bit.INPUTOFFSET=0x00; //no pin scan so no offsetting requied
    ADC->INPUTCTRL.bit.GAIN=0xF; //reference is set at VADDA/2 ie 1.7V, so to have full scale measurement to 3.3 division by /2
    //event control
    ADC->EVCTRL.bit.STARTEI=0x00; //no event driven conversion (free running with polling under 1000 cycle)
    ADC->EVCTRL.bit.SYNCEI=0x00; //no event driven flush & conversion (free running with polling under 1000 cycle)
    ADC->EVCTRL.bit.RESRDYEO=0x00; //for now on zero, want to disable all interupts - to ensure RTOS, with continuous polling
    ADC->EVCTRL.bit.WINMONEO=0x00; //no window mode
    //Window control
    ADC->WINLT.bit.WINLT=0x00; //no window mode
    ADC->WINUT.bit.WINUT=0x00; //no window mode
    //Correction control
    ADC->GAINCORR.bit.GAINCORR=0x00; //no Gain correction
    ADC->OFFSETCORR.bit.OFFSETCORR=0x00; //no Offset correction
    //Debug control
    ADC->DBGCTRL.bit.DBGRUN=0x01; //no ADC during debugging

    //Setting pin AIN10=PB02 as Input (without pull-up or pull-down to avoid distortion) atmel page 384
      //set mux
      PORT->Group[1].PMUX[1].bit.PMUXE=0x01; //Attaching the PB02 to B peripherial, ie. AIN10
      //Set pin
      PORT->Group[1].DIR.bit.DIR&=~((uint32_t) 1<<3); //set direction of bit 3 to zero
      PORT->Group[1].PINCFG[2].bit.INEN=1; //configure as floating input
      PORT->Group[1].PINCFG[2].bit.PULLEN=0; //configure as floating input
      
      //PORT->Group[1].OUT.bit.OUT;
      //PORT->Group[1].IN.bit.IN;
      //PORT->Group[1].CTRL.bit.SAMPLING;
      //PORT->Group[1].PINCFG[2].bit.DRVSTR;
      PORT->Group[1].PINCFG[2].bit.PMUXEN=1; //enable pin


    //USB settings: follow ArduinoCore

    //DMA settings: for later




//Print_register();
      
  ADC->CTRLA.bit.ENABLE=1;
  while (GCLK->STATUS.reg & GCLK_STATUS_SYNCBUSY );
  
  ADC->SWTRIG.bit.FLUSH; //flushes the ADC
  delay(10);
  ADC->SWTRIG.bit.START; //starts the conversion
  delay(1);
  while (ADC->INTFLAG.bit.RESRDY==0);

//stabalizing ADC before printing
  Serial.println(ADC->RESULT.reg);
    while (ADC->INTFLAG.bit.RESRDY==0);
  Serial.println(ADC->RESULT.reg);
    while (ADC->INTFLAG.bit.RESRDY==0);
  Serial.println(ADC->RESULT.reg);
  while (ADC->INTFLAG.bit.RESRDY==0);
  Serial.println(ADC->RESULT.reg);
    while (ADC->INTFLAG.bit.RESRDY==0);
  Serial.println(ADC->RESULT.reg);
    while (ADC->INTFLAG.bit.RESRDY==0);
  Serial.println(ADC->RESULT.reg);

    //Clock configuration
    ADCregH = (uint8_t *) (0x4200401A);
    ADCregL = (uint8_t *) (0x4200401B);
i=0;
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if (i<s){
    while (ADC->INTFLAG.bit.RESRDY==0);
    ADCreg[i]=*ADCregL;i++;ADCreg[i]=*ADCregH;i++;
  } else {
   Serial.write(ADCreg,s);
   i=0;
  };
}
