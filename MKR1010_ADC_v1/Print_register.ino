String ID_selection(uint8_t grp,uint32_t id) {
  switch (grp){
    case 1:
      switch (id){
        case 0x00 : return " - GCLKDFLL48M_REF DFLL48M Reference"; break; 
        case 0x01 : return " - GCLKDPLL FDPLL96M input clock source for reference"; break; 
        case 0x02 : return " - GCLKDPLL_32K FDPLL96M 32kHz clock for FDPLL96M internal lock timer"; break; 
        case 0x03 : return " - GCLKWDT WDT"; break; 
        case 0x04 : return " - GCLKRTC RTC"; break; 
        case 0x05 : return " - GCLKEIC EIC"; break; 
        case 0x06 : return " - GCLKUSB USB"; break; 
        case 0x07 : return " - GCLKEVSYS_CHANNEL_0 EVSYS_CHANNEL_0"; break; 
        case 0x08 : return " - GCLKEVSYS_CHANNEL_1 EVSYS_CHANNEL_1"; break; 
        case 0x09 : return " - GCLKEVSYS_CHANNEL_2 EVSYS_CHANNEL_2"; break; 
        case 0x0A : return " - GCLKEVSYS_CHANNEL_3 EVSYS_CHANNEL_3"; break; 
        case 0x0B : return " - GCLKEVSYS_CHANNEL_4 EVSYS_CHANNEL_4"; break; 
        case 0x0C : return " - GCLKEVSYS_CHANNEL_5 EVSYS_CHANNEL_5"; break; 
        case 0x0D : return " - GCLKEVSYS_CHANNEL_6 EVSYS_CHANNEL_6"; break; 
        case 0x0E : return " - GCLKEVSYS_CHANNEL_7 EVSYS_CHANNEL_7"; break; 
        case 0x0F : return " - GCLKEVSYS_CHANNEL_8 EVSYS_CHANNEL_8"; break; 
        case 0x10 : return " - GCLKEVSYS_CHANNEL_9 EVSYS_CHANNEL_9"; break; 
        case 0x11 : return " - GCLKEVSYS_CHANNEL_10 EVSYS_CHANNEL_10"; break; 
        case 0x12 : return " - GCLKEVSYS_CHANNEL_11 EVSYS_CHANNEL_11"; break; 
        case 0x13 : return " - GCLKSERCOMx_SLOW SERCOMx_SLOW"; break; 
        case 0x14 : return " - GCLKSERCOM0_CORE SERCOM0_CORE"; break; 
        case 0x15 : return " - GCLKSERCOM1_CORE SERCOM1_CORE"; break; 
        case 0x16 : return " - GCLKSERCOM2_CORE SERCOM2_CORE"; break; 
        case 0x17 : return " - GCLKSERCOM3_CORE SERCOM3_CORE"; break; 
        case 0x18 : return " - GCLKSERCOM4_CORE SERCOM4_CORE"; break; 
        case 0x19 : return " - GCLKSERCOM5_CORE SERCOM5_CORE"; break; 
        case 0x1A : return " - GCLKTCC0,GCLK_TCC1 TCC0,TCC1"; break; 
        case 0x1B : return " - GCLKTCC2,GCLK_TC3 TCC2,TC3"; break; 
        case 0x1C : return " - GCLKTC4,GCLK_TC5 TC4,TC5"; break; 
        case 0x1D : return " - GCLKTC6,GCLK_TC7 TC6,TC7"; break; 
        case 0x1E : return " - GCLKADC ADC"; break; 
        case 0x1F : return " - GCLKAC_DIG AC_DIG"; break; 
        case 0x20 : return " - GCLKAC_ANA AC_ANA"; break; 
        case 0x21 : return " - GCLKDAC DAC"; break; 
        case 0x22 : return " - GCLKPTC PTCReserved"; break; 
        case 0x23 : return " - GCLKI2S_0 I2S_0"; break; 
        case 0x24 : return " - GCLKI2S_1 I2S_1";break;
      }
    case 2:
      switch(id){
        case 0x00: return " - XOSC XOSC oscillator output"; break; 
        case 0x01: return " - GCLKIN Generator input pad"; break; 
        case 0x02: return " - GCLKGEN1 Generic clock generator 1 output"; break; 
        case 0x03: return " - OSCULP32K OSCULP32K oscillator output"; break; 
        case 0x04: return " - OSC32K OSC32K oscillator output"; break; 
        case 0x05: return " - XOSC32K XOSC32K oscillator output"; break; 
        case 0x06: return " - OSC8M OSC8M oscillator output"; break; 
        case 0x07: return " - DFLL48M DFLL48M output"; break; 
        case 0x08: return " - FDPLL96M FDPLL96M output"; break;  
      }
    case 3:
      switch(id){
        case 0x0: return " - 1.0V voltage reference"; break;
        case 0x1: return " - 1/1.48 VDDANA"; break;
        case 0x2: return " - 1/2 VDDANA (only for VDDANA > 2.0V)"; break;
        case 0x3: return " - External reference VREFA"; break;
        case 0x4: return " - External reference VREFB"; break;
      }
    case 4:
      switch(id) {
        case 0x0: return " -1 sample"; break;
        case 0x1: return " -2 samples"; break;
        case 0x2: return " -4 samples"; break;
        case 0x3: return " -8 samples"; break;
        case 0x4: return " -16 samples"; break;
        case 0x5: return " -32 samples"; break;
        case 0x6: return " -64 samples"; break;
        case 0x7: return " -128 samples"; break;
        case 0x8: return " -256 samples"; break;
        case 0x9: return " -512 samples"; break;
        case 0xA: return " -1024 samples"; break; 
      }
    case 5:
      switch(id) {
        case 0x0: return " - DIV4 Peripheral clock divided by 4"; break;
        case 0x1: return " - DIV8 Peripheral clock divided by 8"; break;
        case 0x2: return " - DIV16 Peripheral clock divided by 16"; break;
        case 0x3: return " - DIV32 Peripheral clock divided by 32"; break;
        case 0x4: return " - DIV64 Peripheral clock divided by 64"; break;
        case 0x5: return " - DIV128 Peripheral clock divided by 128"; break;
        case 0x6: return " - DIV256 Peripheral clock divided by 256"; break;
        case 0x7: return " - DIV512 Peripheral clock divided by 512"; break;
      }
    case 6:
      switch(id) {
        case 0x0: return " - 12BIT 12-bit result"; break;
        case 0x1: return " - 16BIT For averaging mode output"; break;
        case 0x2: return " - 10BIT 10-bit result"; break;
        case 0x3: return " - 8BIT 8-bit result"; break;
      }
    case 7:
      switch(id) {
        case 0x0: return(" - DISABLE No window mode (default)"); break;
        case 0x1: return(" - MODE1 Mode 1: RESULT > WINLT"); break;
        case 0x2: return(" - MODE2 Mode 2: RESULT < WINUT"); break;
        case 0x3: return(" - MODE3 Mode 3: WINLT < RESULT < WINUT"); break;
        case 0x4: return(" - MODE4 Mode 4: !(WINLT < RESULT < WINUT)"); break;
      }
    case 8:
      switch(id) {
        case 0x0: return " - Gain factor 1x"; break;
        case 0x1: return " - Gain factor 2x"; break;
        case 0x2: return " - Gain factor 4x"; break;
        case 0x3: return " - Gain factor 8x"; break;
        case 0x4: return " - Gain factor 16x"; break;
        case 0x5-0xE: return " -Gain factor Reserved"; break;
        case 0xF: return " - Gain factor DIV2 1/2x"; break;
      }
    case 9:
      switch(id) {
        case 0x00: return " - PIN0 ADC AIN0 pin"; break;
        case 0x01: return " - PIN1 ADC AIN1 pin"; break;
        case 0x02: return " - PIN2 ADC AIN2 pin"; break;
        case 0x03: return " - PIN3 ADC AIN3 pin"; break;
        case 0x04: return " - PIN4 ADC AIN4 pin"; break;
        case 0x05: return " - PIN5 ADC AIN5 pin"; break;
        case 0x06: return " - PIN6 ADC AIN6 pin"; break;
        case 0x07: return " - PIN7 ADC AIN7 pin"; break;
        case 0x08-0x17: return " - – Reserved"; break;
        case 0x18: return " - GND Internal ground"; break;
        case 0x19: return " - IOGND I/O ground"; break;
        case 0x1A-0x1F: return " - – Reserved"; break;
      }
   case 10:
    switch(id){
      case 0x00: return " -PIN0 ADC AIN0 pin"; break;
      case 0x01: return " - PIN1 ADC AIN1 pin"; break;
      case 0x02: return " -PIN2 ADC AIN2 pin"; break;
      case 0x03: return " - PIN3 ADC AIN3 pin"; break;
      case 0x04: return " - PIN4 ADC AIN4 pin"; break;
      case 0x05: return " - PIN5 ADC AIN5 pin"; break;
      case 0x06: return " - PIN6 ADC AIN6 pin"; break;
      case 0x07: return " - PIN7 ADC AIN7 pin"; break;
      case 0x08: return " - PIN8 ADC AIN8 pin"; break;
      case 0x09: return " - PIN9 ADC AIN9 pin"; break;
      case 0x0A: return " - PIN10 ADC AIN10 pin"; break;
      case 0x0B: return " - PIN11 ADC AIN11 pin"; break;
      case 0x0C: return " - PIN12 ADC AIN12 pin"; break;
      case 0x0D: return " - PIN13 ADC AIN13 pin"; break;
      case 0x0E: return " - PIN14 ADC AIN14 pin"; break;
      case 0x0F: return " - PIN15 ADC AIN15 pin"; break;
      case 0x10: return " - PIN16 ADC AIN16 pin"; break;
      case 0x11: return " - PIN17 ADC AIN17 pin"; break;
      case 0x12: return " - PIN18 ADC AIN18 pin"; break;
      case 0x13: return " - PIN19 ADC AIN19 pin"; break;
      case 0x14-0x17: return " - Reserved"; break;
      case 0x18: return " - TEMP Temperature reference"; break;
      case 0x19: return " - BANDGAP Bandgap voltage"; break;
      case 0x1A: return " - SCALEDCOREVCC 1/4 scaled core supply"; break;
      case 0x1B: return " - SCALEDIOVCC 1/4 scaled I/O supply"; break;
      case 0x1C: return " - DAC DAC output"; break;
      case 0x1D-0x1F: return " - Reserved"; break;
    }
  case 11:
    switch(id) {
      
    }
      break;
  }
  return "";
}


void Print_register() {
// Start serial monitor
  


            GCLK->GENCTRL.reg = GCLK_GENCTRL_ID( (4u) ) | // Generic Clock Generator 3
                      GCLK_GENCTRL_SRC_OSC8M | // Selected source is RC OSC 8MHz (already enabled at reset)
                      GCLK_GENCTRL_OE | // Output clock to a pin for tests
                      GCLK_GENCTRL_GENEN ;
  // Enable the port multiplexer for pin PA6
    PORT->Group[g_APinDescription[6].ulPort].PINCFG[g_APinDescription[6].ulPin].bit.PMUXEN = 1;
  // Switch the port multiplexer for pin PA6 to peripheral H (GCLK_IO[4])
  PORT->Group[g_APinDescription[6].ulPort].PMUX[g_APinDescription[6].ulPin >> 1].reg |= PORT_PMUX_PMUXE_H;
  Serial.println("");

 for (uint8_t i=0;i<36;i++) { 
    uint8_t *clkctrl;
    clkctrl = (uint8_t *) (0x40000C02UL);
    *clkctrl=i;
    while (GCLK->STATUS.reg & GCLK_STATUS_SYNCBUSY );
    
  Serial.print("***********************CLKCTRL ID: "); Serial.print(i);Serial.println("******************************");
               Serial.print(GCLK->CLKCTRL.bit.ID); Serial.println(ID_selection(1,(uint32_t) GCLK->CLKCTRL.bit.ID));// Serial.println("            :6 bit: 0.. 5 Generic Clock Selection ID");
               //Serial.print(GCLK->CLKCTRL.bit.); Serial.println("            :2 bit): 6.. 7 Reserved ");
               Serial.print(GCLK->CLKCTRL.bit.GEN); Serial.println("            :4 bit: 8..11 Generic Clock Generator");
               //Serial.print(GCLK->CLKCTRL.bit.); Serial.println("            :2 bit: 12..13 Reserved ");
               Serial.print(GCLK->CLKCTRL.bit.CLKEN); Serial.println("            :1 bit: 14 Clock Enable ");
               Serial.print(GCLK->CLKCTRL.bit.WRTLOCK); Serial.println("            :1 bit: 15 Write Lock ");
 }

 for (uint8_t i=0;i<9;i++) { 
    uint8_t *genctrl;
    genctrl = (uint8_t *) (0x40000C04UL);
    *genctrl=i;
    while (GCLK->STATUS.reg & GCLK_STATUS_SYNCBUSY );
    
 Serial.print("***********************GENCTRL ID: "); Serial.print(i);Serial.println("******************************");
                Serial.print(GCLK->GENCTRL.bit.ID);Serial.println("            :4 bit: 0.. 3 Generic Clock Generator Selection ");
               // Serial.print(GCLK->GENCTRL.bit.);Serial.println("            :4 bit: 4.. 7 Reserved ");
                Serial.print(GCLK->GENCTRL.bit.SRC);Serial.print("            ");Serial.println(ID_selection(2,(uint32_t) GCLK->GENCTRL.bit.SRC));//;Serial.println("            :5 bit: 8..12 Source Select ");
               //Serial.print(GCLK->GENCTRL.bit.);Serial.println("            :3 bit: 13..15 Reserved ");
                Serial.print(GCLK->GENCTRL.bit.GENEN);Serial.println("            :1 bit: 16 Generic Clock Generator Enable ");
                Serial.print(GCLK->GENCTRL.bit.IDC);Serial.println("            :1 bit: 17 Improve Duty Cycle ");
                Serial.print(GCLK->GENCTRL.bit.OOV);Serial.println("            :1 bit: 18 Output Off Value ");
                Serial.print(GCLK->GENCTRL.bit.OE);Serial.println("            :1 bit: 19 Output Enable ");
                Serial.print(GCLK->GENCTRL.bit.DIVSEL);Serial.println("            :1 bit: 20 Divide Selection ");
                Serial.print(GCLK->GENCTRL.bit.RUNSTDBY);Serial.println("            :1 bit: 21 Run in Standby ");
               //Serial.print(GCLK->GENCTRL.bit.);Serial.println("            :10 bit: 22..31 Reserved ");
}

 for (uint8_t i=0;i<9;i++) { 
    uint8_t *gendiv;
    gendiv = (uint8_t *) (0x40000C08UL);
    *gendiv=i;
    while (GCLK->STATUS.reg & GCLK_STATUS_SYNCBUSY );
    
 Serial.print("***********************GENDIV ID: "); Serial.print(i);Serial.println("******************************");
               Serial.print(GCLK->GENDIV.bit.ID);Serial.println("            :4: bit: 0.. 3 Generic Clock Generator Selection");
               //Serial.print(GCLK->GENDIV.bit.);Serial.println("            :4: bit: 4.. 7 Reserved");
               Serial.print(GCLK->GENDIV.bit.DIV);Serial.println("            :16: bit: 8..23 Division Factor");
               //Serial.print(GCLK->GENDIV.bit.);Serial.println("            :8: bit: 24..31 Reserved");
}

Serial.println("***********************CPUSEL******************************");
               Serial.print(PM->CPUSEL.bit.CPUDIV); Serial.println("            :3 bit:  0.. 2  CPU Prescaler Selection");
               //Serial.print(PM->CPUSEL.bit.)& Serial.printlin(":5 bit:  3.. 7  Reserved");
Serial.println("***********************CPUSEL******************************");
Serial.println("***********************APBASEL******************************");
                Serial.print(PM->APBASEL.bit.APBADIV); Serial.println("            :3 bit:  0.. 2  APBA Prescaler Selection");
              //  Serial.print(PM->APBASEL.bit.); Serial.println("            :5 bit:  3.. 7  Reserved");
Serial.println("***********************APBASEL******************************");
Serial.println("***********************APBBSEL******************************");
                Serial.print(PM->APBBSEL.bit.APBBDIV); Serial.println("            :3 bit:  0.. 2  APBB Prescaler Selection");
               // Serial.print(PM->APBBSEL.bit.); Serial.println("            :5 bit:  3.. 7  Reserved");
Serial.println("***********************APBBSEL******************************");
Serial.println("***********************APBCSEL******************************");
                Serial.print(PM->APBCSEL.bit.APBCDIV); Serial.println("            :3 bit:  0.. 2  APBC Prescaler Selection");
               // Serial.print(PM->APBCSEL.bit.); Serial.println("            :5 bit:  3.. 7  Reserved");
Serial.println("***********************AHBMASK******************************");
                 Serial.print(PM->AHBMASK.bit.HPB0_); Serial.println("            :1 bit 0 HPB0 AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.HPB1_); Serial.println("            :1 bit 1 HPB1 AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.HPB2_); Serial.println("            :1 bit 2 HPB2 AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.DSU_); Serial.println("            :1 bit 3 DSU AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.NVMCTRL_); Serial.println("            :1 bit 4 NVMCTRL AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.DMAC_); Serial.println("            :1 bit 5 DMAC AHB Clock Mask");
                 Serial.print(PM->AHBMASK.bit.USB_); Serial.println("            :1 bit 6 USB AHB Clock Mask");
                 //Serial.print(PM->AHBMASK.bit.); Serial.println(:25 bit 7..31 Reserved");
Serial.println("***********************AHBMASK******************************");
Serial.println("***********************APBAMASK******************************");
               Serial.print(PM->APBAMASK.bit.PAC0_); Serial.println("            :1 bit: 0 PAC0 APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.PM_); Serial.println("            :1 bit: 1 PM APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.SYSCTRL_); Serial.println("            :1 bit: 2 SYSCTRL APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.GCLK_); Serial.println("            :1 bit: 3 GCLK APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.WDT_); Serial.println("            :1 bit: 4 WDT APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.RTC_); Serial.println("            :1 bit: 5 RTC APB Clock Enable ");
               Serial.print(PM->APBAMASK.bit.EIC_); Serial.println("            :1 bit: 6 EIC APB Clock Enable ");
              // Serial.print(PM->APBAMASK.bit.); Serial.println("            :25 bit: 7..31 Reserved "); 
Serial.println("***********************APBAMASK******************************"); 
Serial.println("***********************APBBMASK******************************"); 
               Serial.print(PM->APBBMASK.bit.PAC1_); Serial.println("            :1 bit: 0 PAC1 APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.DSU_); Serial.println("            :1 bit: 1 DSU APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.NVMCTRL_); Serial.println("            :1 bit: 2 NVMCTRL APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.PORT_); Serial.println("            :1 bit: 3 PORT APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.DMAC_); Serial.println("            :1 bit: 4 DMAC APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.USB_); Serial.println("            :1 bit: 5 USB APB Clock Enable ");
               Serial.print(PM->APBBMASK.bit.HMATRIX_); Serial.println("            :1 bit: 6 HMATRIX APB Clock Enable ");
              // Serial.print(PM->APBBMASK.bit.); Serial.println("            :25 bit: 7..31 Reserved ");
Serial.println("***********************APBBMASK******************************");  
 
Serial.println("***********************APBCMASK******************************");
                 Serial.print(PM->APBCMASK.bit.PAC2_); Serial.println("            :1 bit: 0 PAC2 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.EVSYS_); Serial.println("            :1 bit: 1 EVSYS APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM0_); Serial.println("            :1 bit: 2 SERCOM0 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM1_); Serial.println("            :1 bit: 3 SERCOM1 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM2_); Serial.println("            :1 bit: 4 SERCOM2 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM3_); Serial.println("            :1 bit: 5 SERCOM3 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM4_); Serial.println("            :1 bit: 6 SERCOM4 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.SERCOM5_); Serial.println("            :1 bit: 7 SERCOM5 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TCC0_); Serial.println("            :1 bit: 8 TCC0 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TCC1_); Serial.println("            :1 bit: 9 TCC1 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TCC2_); Serial.println("            :1 bit: 10 TCC2 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TC3_); Serial.println("            :1 bit: 11 TC3 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TC4_); Serial.println("            :1 bit: 12 TC4 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TC5_); Serial.println("            :1 bit: 13 TC5 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TC6_); Serial.println("            :1 bit: 14 TC6 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.TC7_); Serial.println("            :1 bit: 15 TC7 APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.ADC_); Serial.println("            :1 bit: 16 ADC APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.AC_); Serial.println("            :1 bit: 17 AC APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.DAC_); Serial.println("            :1 bit: 18 DAC APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.PTC_); Serial.println("            :1 bit: 19 PTC APB Clock Enable ");
                 Serial.print(PM->APBCMASK.bit.I2S_); Serial.println("            :1 bit: 20 I2S APB Clock Enable ");
Serial.println("***********************APBCMASK******************************");
Serial.println("***********************RCAUSE******************************");
                   Serial.print(PM->RCAUSE.bit.POR); Serial.println("            :1  bit: 0 Power On Reset");
                   Serial.print(PM->RCAUSE.bit.BOD12); Serial.println("            :1  bit: 1 Brown Out 12 Detector Reset");
                   Serial.print(PM->RCAUSE.bit.BOD33); Serial.println("            :1  bit: 2 Brown Out 33 Detector Reset");
                 //  Serial.print(PM->RCAUSE.bit. ); Serial.println("            :1  bit: 3 Reserved");
                   Serial.print(PM->RCAUSE.bit.EXT); Serial.println("            :1  bit: 4 External Reset");
                 //??????  Serial.print(PM->RCAUSE.bit.WDT); Serial.println("            :1  bit: 5 Watchdog Reset");
                   Serial.print(PM->RCAUSE.bit.SYST); Serial.println("            :1  bit: 6 System Reset Request");
                  // Serial.print(PM->RCAUSE.bit. ); Serial.println("            :1  bit: 7 Reserved");
Serial.println("***********************RCAUSE******************************");

Serial.println("***********************PCLKSR******************************");
               Serial.print(SYSCTRL->PCLKSR.bit.XOSCRDY); Serial.println("            :1 bit: 0 XOSC Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.XOSC32KRDY); Serial.println("            :1 bit: 1 XOSC32K Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.OSC32KRDY); Serial.println("            :1 bit: 2 OSC32K Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.OSC8MRDY); Serial.println("            :1 bit: 3 OSC8M Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.DFLLRDY); Serial.println("            :1 bit: 4 DFLL Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.DFLLOOB); Serial.println("            :1 bit: 5 DFLL Out Of Bounds");
               Serial.print(SYSCTRL->PCLKSR.bit.DFLLLCKF); Serial.println("            :1 bit: 6 DFLL Lock Fine");
               Serial.print(SYSCTRL->PCLKSR.bit.DFLLLCKC); Serial.println("            :1 bit: 7 DFLL Lock Coarse");
               Serial.print(SYSCTRL->PCLKSR.bit.DFLLRCS); Serial.println("            :1 bit: 8 DFLL Reference Clock Stopped");
               Serial.print(SYSCTRL->PCLKSR.bit.BOD33RDY); Serial.println("            :1 bit: 9 BOD33 Ready");
               Serial.print(SYSCTRL->PCLKSR.bit.BOD33DET); Serial.println("            :1 bit: 10 BOD33 Detection");
               Serial.print(SYSCTRL->PCLKSR.bit.B33SRDY); Serial.println("            :1 bit: 11 BOD33 Synchronization Ready");
               //Serial.print(SYSCTRL->PCLKSR.bit.:3;bit: 12..14 Reserved");
               Serial.print(SYSCTRL->PCLKSR.bit.DPLLLCKR); Serial.println("            :1 bit: 15 DPLL Lock Rise");
               Serial.print(SYSCTRL->PCLKSR.bit.DPLLLCKF); Serial.println("            :1 bit: 16 DPLL Lock Fall");
               Serial.print(SYSCTRL->PCLKSR.bit.DPLLLTO); Serial.println("            :1 bit: 17 DPLL Lock Timeout");
               //Serial.print(SYSCTRL->PCLKSR.bit.:14;bit: 18..31 Reserved");
Serial.println("***********************PCLKSR******************************");

Serial.println("***********************XOSC******************************");
               //Serial.print(); Serial.println("            :1 bit: 0 Reserved");
               Serial.print(SYSCTRL->XOSC.bit.ENABLE); Serial.println("            :1 bit: 1 Oscillator Enable");
               Serial.print(SYSCTRL->XOSC.bit.XTALEN); Serial.println("            :1 bit: 2 Crystal Oscillator Enable");
               //Serial.print(":3; bit: 3.. 5 Reserved");
               Serial.print(SYSCTRL->XOSC.bit.RUNSTDBY); Serial.println("            :1 bit: 6 Run in Standby");
               Serial.print(SYSCTRL->XOSC.bit.ONDEMAND); Serial.println("            :1 bit: 7 On Demand Control");
               Serial.print(SYSCTRL->XOSC.bit.GAIN); Serial.println("            :3; bit: 8..10 Oscillator Gain");
               Serial.print(SYSCTRL->XOSC.bit.AMPGC); Serial.println("            :1 bit: 11 Automatic Amplitude Gain Control");
               Serial.print(SYSCTRL->XOSC.bit.STARTUP); Serial.println("            :4; bit: 12..15 Start-Up Time");
Serial.println("***********************XOSC******************************");

Serial.println("***********************XOSC32K******************************");
              // Serial.print(SYSCTRL->XOSC32K.bit.); Serial.println("            :1 bit: 0 Reserved");
               Serial.print(SYSCTRL->XOSC32K.bit.ENABLE); Serial.println("            :1 bit: 1 Oscillator Enable");
               Serial.print(SYSCTRL->XOSC32K.bit.XTALEN); Serial.println("            :1 bit: 2 Crystal Oscillator Enable");
               Serial.print(SYSCTRL->XOSC32K.bit.EN32K); Serial.println("            :1 bit: 3 32kHz Output Enable");
               Serial.print(SYSCTRL->XOSC32K.bit.EN1K); Serial.println("            :1 bit: 4 1kHz Output Enable");
               Serial.print(SYSCTRL->XOSC32K.bit.AAMPEN); Serial.println("            :1 bit: 5 Automatic Amplitude Control Enable");
               Serial.print(SYSCTRL->XOSC32K.bit.RUNSTDBY); Serial.println("            :1 bit: 6 Run in Standby");
               Serial.print(SYSCTRL->XOSC32K.bit.ONDEMAND); Serial.println("            :1 bit: 7 On Demand Control");
               Serial.print(SYSCTRL->XOSC32K.bit.STARTUP); Serial.println("            :3 bit: 8..10 Oscillator Start-Up Time");
              // Serial.print(SYSCTRL->XOSC32K.bit.); Serial.println("            :1 bit: 11 Reserved");
               Serial.print(SYSCTRL->XOSC32K.bit.WRTLOCK); Serial.println("            :1 bit: 12 Write Lock");
              // Serial.print(SYSCTRL->XOSC32K.bit.); Serial.println("            :3 bit: 13..15 Reserved");
Serial.println("***********************XOSC32K******************************");

Serial.println("***********************OSC32K******************************");
            // Serial.print(SYSCTRL->OSC32K.bit.); Serial.println("            :1 bit: 0 Reserved");
             Serial.print(SYSCTRL->OSC32K.bit.ENABLE); Serial.println("            :1 bit: 1 Oscillator Enable");
             Serial.print(SYSCTRL->OSC32K.bit.EN32K); Serial.println("            :1 bit: 2 32kHz Output Enable");
             Serial.print(SYSCTRL->OSC32K.bit.EN1K); Serial.println("            :1 bit: 3 1kHz Output Enable");
            // Serial.print(SYSCTRL->OSC32K.bit.:2; bit: 4.. 5 Reserved");
             Serial.print(SYSCTRL->OSC32K.bit.RUNSTDBY); Serial.println("            :1 bit: 6 Run in Standby");
             Serial.print(SYSCTRL->OSC32K.bit.ONDEMAND); Serial.println("            :1 bit: 7 On Demand Control");
             Serial.print(SYSCTRL->OSC32K.bit.STARTUP); Serial.println("            :3 bit: 8..10 Oscillator Start-Up Time");
            // Serial.print(SYSCTRL->OSC32K.bit.); Serial.println("            :1 bit: 11 Reserved");
             Serial.print(SYSCTRL->OSC32K.bit.WRTLOCK); Serial.println("            :1 bit: 12 Write Lock");
            // Serial.print(SYSCTRL->OSC32K.bit.); Serial.println("            :3 bit: 13..15 Reserved");
             Serial.print(SYSCTRL->OSC32K.bit.CALIB); Serial.println("            :7 bit: 16..22 Oscillator Calibration");
            // Serial.print(SYSCTRL->OSC32K.bit.:9; bit: 23..31 Reserved");
Serial.println("***********************OSC32K******************************");
Serial.println("***********************OSCULP32K******************************");
             Serial.print(SYSCTRL->OSCULP32K.bit.CALIB); Serial.println("            :5 bit: 0.. 4 Oscillator Calibration/");
            // Serial.print(SYSCTRL->OSCULP32K.bit.); Serial.println("            :2 5.. 6 Reserved");
             Serial.print(SYSCTRL->OSCULP32K.bit.WRTLOCK); Serial.println("            :1 bit: 7 Write Lock");
Serial.println("***********************OSCULP32K******************************");
Serial.println("***********************OSC8M******************************");
               //Serial.print(SYSCTRL->OSC8M.bit.); Serial.println("            :1 bit: 0 Reserved ");
               Serial.print(SYSCTRL->OSC8M.bit.ENABLE); Serial.println("            :1 bit: 1 Oscillator Enable ");
               //Serial.print(SYSCTRL->OSC8M.bit.); Serial.println("            :4 bit: 2.. 5 Reserved ");
               Serial.print(SYSCTRL->OSC8M.bit.RUNSTDBY); Serial.println("            :1 bit: 6 Run in Standby ");
               Serial.print(SYSCTRL->OSC8M.bit.ONDEMAND); Serial.println("            :1 bit: 7 On Demand Control ");
               Serial.print(SYSCTRL->OSC8M.bit.PRESC); Serial.println("            :2 bit: 8.. 9 Oscillator Prescaler ");
               //Serial.print(SYSCTRL->OSC8M.bit.); Serial.println("            :6 bit: 10..15 Reserved ");
               Serial.print(SYSCTRL->OSC8M.bit.CALIB); Serial.println("            :12 bit: 16..27 Oscillator Calibration ");
               //Serial.print(SYSCTRL->OSC8M.bit.); Serial.println("            :2 bit: 28..29 Reserved ");
               Serial.print(SYSCTRL->OSC8M.bit.FRANGE); Serial.println("            :2 bit: 30..31 Oscillator Frequency Range ");
Serial.println("***********************OSC8M******************************");
Serial.println("***********************DFLLCTRL******************************");
              // Serial.print(SYSCTRL->DFLLCTRL.bit.); Serial.println("            :1  bit: 0 Reserved ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.ENABLE); Serial.println("            :1  bit: 1 DFLL Enable ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.MODE); Serial.println("            :1  bit: 2 Operating Mode Selection ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.STABLE); Serial.println("            :1  bit: 3 Stable DFLL Frequency ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.LLAW); Serial.println("            :1  bit: 4 Lose Lock After Wake ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.USBCRM); Serial.println("            :1  bit: 5 USB Clock Recovery Mode ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.RUNSTDBY); Serial.println("            :1  bit: 6 Run in Standby ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.ONDEMAND); Serial.println("            :1  bit: 7 On Demand Control ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.CCDIS); Serial.println("            :1  bit: 8 Chill Cycle Disable ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.QLDIS); Serial.println("            :1  bit: 9 Quick Lock Disable ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.BPLCKC); Serial.println("            :1  bit: 10 Bypass Coarse Lock ");
               Serial.print(SYSCTRL->DFLLCTRL.bit.WAITLOCK); Serial.println("            :1  bit: 11 Wait Lock ");
              // Serial.print(SYSCTRL->DFLLCTRL.bit.); Serial.println("            :4;  bit: 12..15 Reserved ");
Serial.println("***********************DFLLCTRL******************************");

Serial.println("***********************VREF******************************");
              // Serial.print(SYSCTRL->VREF.bit.); Serial.println("            :1  bit: 0 Reserved ");
               Serial.print(SYSCTRL->VREF.bit.TSEN); Serial.println("            :1  bit: 1 Temperature Sensor Enable ");
               Serial.print(SYSCTRL->VREF.bit.BGOUTEN); Serial.println("            :1  bit: 2 Bandgap Output Enable ");
             //  Serial.print(SYSCTRL->VREF.bit.); Serial.println("            :13  bit: 3..15 Reserved ");
               Serial.print(SYSCTRL->VREF.bit.CALIB); Serial.println("            :11 bit: 16..26 Bandgap Voltage Generator Calibration ");
              // Serial.print(SYSCTRL->VREF.bit.); Serial.println("            :5  bit: 27..31 Reserved ");
Serial.println("***********************VREF******************************");
Serial.println("***********************DPLLCTRLA******************************");
             //  Serial.print(SYSCTRL->DPLLCTRLA.bit.); Serial.println("            :1  bit: 0 Reserved ");
               Serial.print(SYSCTRL->DPLLCTRLA.bit.ENABLE); Serial.println("            :1  bit: 1 DPLL Enable ");
             //  Serial.print(SYSCTRL->DPLLCTRLA.bit.); Serial.println(" :4  bit: 2.. 5 Reserved ");
               Serial.print(SYSCTRL->DPLLCTRLA.bit.RUNSTDBY); Serial.println("            :1  bit: 6 Run in Standby ");
               Serial.print(SYSCTRL->DPLLCTRLA.bit.ONDEMAND); Serial.println("            :1  bit: 7 On Demand Clock Activation ");
Serial.println("***********************DPLLCTRLA******************************");
Serial.println("***********************DPLLCTRLB******************************");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.FILTER); Serial.println("            :2;  bit: 0.. 1 Proportional Integral Filter Selection");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.LPEN); Serial.println("            :1;  bit: 2 Low-Power Enable");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.WUF); Serial.println("            :1;  bit: 3 Wake Up Fast");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.REFCLK); Serial.println("            :2;  bit: 4.. 5 Reference Clock Selection");
              // Serial.print(SYSCTRL->DPLLCTRLB.bit.); Serial.println("            :2;  bit: 6.. 7 Reserved");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.LTIME); Serial.println("            :3;  bit: 8..10 Lock Time");
              // Serial.print(SYSCTRL->DPLLCTRLB.bit.); Serial.println("            :1;  bit: 11 Reserved");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.LBYPASS); Serial.println("            :1;  bit: 12 Lock Bypass");
              // Serial.print(SYSCTRL->DPLLCTRLB.bit.); Serial.println("            :3;  bit: 13..15 Reserved");
               Serial.print(SYSCTRL->DPLLCTRLB.bit.DIV); Serial.println("            :11;  bit: 16..26 Clock Divider");
              // Serial.print(SYSCTRL->DPLLCTRLB.bit.); Serial.println("            :5;  bit: 27..31 Reserved");
Serial.println("***********************DPLLCTRLB******************************");

Serial.println("***********************DPLLSTATUS******************************");
               Serial.print(SYSCTRL->DPLLSTATUS.bit.LOCK); Serial.println("            :1 bit: 0 DPLL Lock Status");
               Serial.print(SYSCTRL->DPLLSTATUS.bit.CLKRDY); Serial.println("            :1 bit: 1 Output Clock Ready");
               Serial.print(SYSCTRL->DPLLSTATUS.bit.ENABLE); Serial.println("            :1 bit: 2 DPLL Enable");
               Serial.print(SYSCTRL->DPLLSTATUS.bit.DIV); Serial.println("            :1 bit: 3 Divider Enable");
              // Serial.print(SYSCTRL->DPLLSTATUS.bit.); Serial.println("            :4 bit: 4.. 7 Reserved");
Serial.println("***********************DPLLSTATUS******************************");

for (uint8_t y=0;y<3;y++) { 
    Serial.print("***********************PORT "); Serial.print(y); Serial.println("**********************************");
              Serial.print(PORT->Group[y].DIR.bit.DIR,BIN); Serial.println("            :bit  0..31  Port Data Direction");
              Serial.print(PORT->Group[y].OUT.bit.OUT,BIN); Serial.println("            :bit  0..31  Port Data Output Value");
              Serial.print(PORT->Group[y].IN.bit.IN,BIN); Serial.println("            :bit  0..31  Port Data Input Value");
              Serial.print(PORT->Group[y].CTRL.bit.SAMPLING,BIN); Serial.println("            :bit:  0..31  Input Sampling Mode");
              for (uint8_t i=0;i<16;i++) {
                Serial.print(2*i); Serial.print("&"); Serial.print(2*i+2); Serial.print("-");Serial.print(PORT->Group[y].PMUX[i].bit.PMUXE); Serial.println("            bit 0.. 3  Peripheral Multiplexing Even");
                Serial.print(2*i+1); Serial.print("&"); Serial.print(2*i+3); Serial.print("-"); Serial.print(PORT->Group[y].PMUX[i].bit.PMUXO); Serial.println("         bit 4.. 7  Peripheral Multiplexing Odd");
              }
              for (uint8_t i=0;i<32;i++) {
                Serial.print("********Pin:");Serial.print(i); Serial.print(" on port: "); Serial.print(y); Serial.println("************"); Serial.print("    ");
                uint32_t sel=((uint32_t) 1 << i);
                Serial.print((PORT->Group[y].DIR.bit.DIR&sel)>>i); Serial.println("            :bit  0..31  Port Data Direction");
                Serial.print((PORT->Group[y].OUT.bit.OUT&sel)>>i); Serial.println("            :bit  0..31  Port Data Output Value");
                Serial.print((PORT->Group[y].IN.bit.IN&sel)>>i); Serial.println("            :bit  0..31  Port Data Input Value");
                Serial.print((PORT->Group[y].CTRL.bit.SAMPLING&sel)>>i); Serial.println("            :bit:  0..31  Input Sampling Mode");
                Serial.print(PORT->Group[y].PINCFG[i].bit.PMUXEN); Serial.println("            :1 bit 0 Peripheral Multiplexer Enable "); Serial.print("    ");
                 Serial.print(PORT->Group[y].PINCFG[i].bit.INEN); Serial.println("            :1 bit 1 Input Enable "); Serial.print("    ");
                Serial.print(PORT->Group[y].PINCFG[i].bit.PULLEN); Serial.println("            :1 bit 2 Pull Enable "); Serial.print("    ");
               //Serial.print(PORT->Group[y].PINCFG[i].bit.); Serial.println("            :3 bit 3.. 5 Reserved "); Serial.print("    ");
                Serial.print(PORT->Group[y].PINCFG[i].bit.DRVSTR); Serial.println("            :1 bit 6 Output Driver Strength Selection ");
               //Serial.print(PORT->Group[y].PINCFG[i].bit.); Serial.println("            :1 bit 7 Reserved ");
               //Serial.print("********Pin:");Serial.print(i); Serial.println("************");
              }
  Serial.print("***********************PORT "); Serial.print(y); Serial.println("**********************************");
}

Serial.println("***********************SERCOM3 SPI CTRLA******************************");
               Serial.print(SERCOM3->SPI.CTRLA.bit.SWRST); Serial.println(":1 bit: 0 Software Reset");
               Serial.print(SERCOM3->SPI.CTRLA.bit.ENABLE); Serial.println(":1 bit: 1 Enable");
               Serial.print(SERCOM3->SPI.CTRLA.bit.MODE); Serial.println(":3 bit: 2.. 4 Operating Mode");
              // Serial.print(SERCOM3->SPI.CTRLA.bit.); Serial.println(":2 bit: 5.. 6 Reserved");
               Serial.print(SERCOM3->SPI.CTRLA.bit.RUNSTDBY); Serial.println(":1 bit: 7 Run during Standby");
               Serial.print(SERCOM3->SPI.CTRLA.bit.IBON); Serial.println(":1 bit: 8 Immediate Buffer Overflow Notification");
              // Serial.print(SERCOM3->SPI.CTRLA.bit.); Serial.println(":7 bit: 9..15 Reserved");
               Serial.print(SERCOM3->SPI.CTRLA.bit.DOPO); Serial.println(":2 bit: 16..17 Data Out Pinout");
              // Serial.print(SERCOM3->SPI.CTRLA.bit.); Serial.println(":2 bit: 18..19 Reserved");
               Serial.print(SERCOM3->SPI.CTRLA.bit.DIPO); Serial.println(":2 bit: 20..21 Data In Pinout");
              // Serial.print(SERCOM3->SPI.CTRLA.bit.); Serial.println(":2 bit: 22..23 Reserved");
               Serial.print(SERCOM3->SPI.CTRLA.bit.FORM); Serial.println(":4 bit: 24..27 Frame Format");
               Serial.print(SERCOM3->SPI.CTRLA.bit.CPHA); Serial.println(":1 bit: 28 Clock Phase");
               Serial.print(SERCOM3->SPI.CTRLA.bit.CPOL); Serial.println(":1 bit: 29 Clock Polarity");
               Serial.print(SERCOM3->SPI.CTRLA.bit.DORD); Serial.println(":1 bit: 30 Data Order");
             //  Serial.print(SERCOM3->SPI.CTRLA.bit.); Serial.println(":1 bit: 31 Reserved");
Serial.println("***********************SERCOM3 SPI CTRLA******************************");
Serial.println("***********************SPI CTRLB******************************");
             Serial.print(SERCOM3->SPI.CTRLB.bit.CHSIZE); Serial.println(":3  bit: 0.. 2 Character Size");
            // Serial.print(SERCOM3->SPI.CTRLB.bit.); Serial.println(":3  bit: 3.. 5 Reserved");
             Serial.print(SERCOM3->SPI.CTRLB.bit.PLOADEN); Serial.println(":1  bit: 6 Data Preload Enable");
            // Serial.print(SERCOM3->SPI.CTRLB.bit.); Serial.println(":2  bit: 7.. 8 Reserved");
             Serial.print(SERCOM3->SPI.CTRLB.bit.SSDE); Serial.println(":1  bit: 9 Slave Select Low Detect Enable");
            // Serial.print(SERCOM3->SPI.CTRLB.bit.); Serial.println(":3  bit: 10..12 Reserved");
             Serial.print(SERCOM3->SPI.CTRLB.bit.MSSEN); Serial.println(":1  bit: 13 Master Slave Select Enable");
             Serial.print(SERCOM3->SPI.CTRLB.bit.AMODE); Serial.println(":2  bit: 14..15 Address Mode");
            // Serial.print(SERCOM3->SPI.CTRLB.bit.); Serial.println(":1  bit: 16 Reserved");
             Serial.print(SERCOM3->SPI.CTRLB.bit.RXEN); Serial.println(":1  bit: 17 Receiver Enable");
            // Serial.print(SERCOM3->SPI.CTRLB.bit.); Serial.println(":14  bit: 18..31 Reserved");
Serial.println("***********************SPI CTRLB******************************");

Serial.println("***********************ADC CTRLA******************************");
             Serial.print(ADC->CTRLA.bit.SWRST); Serial.println(":1 bit: 0 Software Reset");
             Serial.print(ADC->CTRLA.bit.ENABLE); Serial.println(":1 bit: 1 Enable");
             Serial.print(ADC->CTRLA.bit.RUNSTDBY); Serial.println(":1 bit: 2 Run in Standby");
            // Serial.print(ADC->CTRLA.bit.) Serial.println(":5 bit: 3.. 7 Reserved");
Serial.println("***********************ADC CTRLA******************************");
Serial.println("***********************ADC REFCTRL******************************");
             Serial.print(ADC->REFCTRL.bit.REFSEL); Serial.println(ID_selection(3,(uint32_t) ADC->REFCTRL.bit.REFSEL));//Serial.println(":4 bit: 0.. 3 Reference Selection");
             //Serial.print(ADC->REFCTRL.bit.); Serial.println(":3 bit: 4.. 6 Reserved");
             Serial.print(ADC->REFCTRL.bit.REFCOMP); Serial.println(":1 bit: 7 Reference Buffer Offset Compensation Enable");
Serial.println("***********************ADC REFCTRL******************************");
Serial.println("***********************ADC AVGCTRL******************************");
             Serial.print(ADC->AVGCTRL.bit.SAMPLENUM); Serial.println(ID_selection(4,(uint32_t) ADC->AVGCTRL.bit.SAMPLENUM));//Serial.println(":4 bit: 0.. 3 Number of Samples to be Collected");
             Serial.print(ADC->AVGCTRL.bit.ADJRES); Serial.println(":3 bit: 4.. 6 Adjusting Result / Division Coefficient");
             //Serial.print(ADC->AVGCTRL.bit.); Serial.println(":1 bit: 7 Reserved");
Serial.println("***********************ADC AVGCTRL******************************");
Serial.println("***********************ADC SAMPCTRL******************************");
             Serial.print(ADC->SAMPCTRL.bit.SAMPLEN); Serial.println(":6 bit: 0.. 5 Sampling Time Length");
             //Serial.print(ADC->SAMPCTRL.bit.); Serial.println(":2 bit: 6.. 7 Reserved");
Serial.println("***********************ADC SAMPCTRL******************************");
Serial.println("***********************ADC CTRLB******************************");
             Serial.print(ADC->CTRLB.bit.DIFFMODE); Serial.println(":1 bit: 0 Differential Mode");
             Serial.print(ADC->CTRLB.bit.LEFTADJ); Serial.println(":1 bit: 1 Left-Adjusted Result");
             Serial.print(ADC->CTRLB.bit.FREERUN); Serial.println(":1 bit: 2 Free Running Mode");
             Serial.print(ADC->CTRLB.bit.CORREN); Serial.println(":1 bit: 3 Digital Correction Logic Enabled");
             Serial.print(ADC->CTRLB.bit.RESSEL); Serial.println(ID_selection(6,(uint32_t) ADC->CTRLB.bit.RESSEL));//Serial.println(":2 bit: 4.. 5 Conversion Result Resolution");
             //Serial.print(ADC->CTRLB.bit.); Serial.println(":2 bit: 6.. 7 Reserved");
             Serial.print(ADC->CTRLB.bit.PRESCALER); Serial.println(ID_selection(5,(uint32_t) ADC->CTRLB.bit.PRESCALER));// Serial.println(":3 bit: 8..10 Prescaler Configuration");
             //Serial.print(ADC->CTRLB.bit.); Serial.println(":5 bit: 11..15 Reserved");
Serial.println("***********************ADC CTRLB******************************");
Serial.println("***********************ADC WINCTRL******************************");
             Serial.print(ADC->WINCTRL.bit.WINMODE); Serial.println(ID_selection(7,(uint32_t) ADC->WINCTRL.bit.WINMODE));// Serial.println(":3  bit: 0.. 2 Window Monitor Mode);
             //Serial.print(ADC->WINCTRL.bit.); Serial.println(":5  bit: 3.. 7 Reserved);
Serial.println("***********************ADC WINCTRL******************************");
Serial.println("***********************ADC SWTRIG******************************");
             Serial.print(ADC->SWTRIG.bit.FLUSH); Serial.println(":1  bit# 0 ADC Conversion Flush");
             Serial.print(ADC->SWTRIG.bit.START); Serial.println(":1  bit# 1 ADC Start Conversion");
             //Serial.print(ADC->SWTRIG.bit.); Serial.println(":6  bit# 2.. 7 Reserved");
Serial.println("***********************ADC SWTRIG******************************");
Serial.println("***********************ADC INPUTCTRL******************************");
               Serial.print(ADC->INPUTCTRL.bit.MUXPOS);Serial.println(ID_selection(10,(uint32_t) ADC->INPUTCTRL.bit.MUXPOS));// Serial.println(":5  bit: 0.. 4 Positive Mux Input Selection");
               //Serial.print(ADC->INPUTCTRL.bit.); Serial.println(":3  bit: 5.. 7 Reserved");
               Serial.print(ADC->INPUTCTRL.bit.MUXNEG);Serial.println(ID_selection(9,(uint32_t) ADC->INPUTCTRL.bit.MUXNEG));// Serial.println(":5  bit: 8..12 Negative Mux Input Selection");
               //Serial.print(ADC->INPUTCTRL.bit.); Serial.println(":3  bit: 13..15 Reserved");
               Serial.print(ADC->INPUTCTRL.bit.INPUTSCAN); Serial.println(":4  bit: 16..19 Number of Input Channels Included in Scan");
               Serial.print(ADC->INPUTCTRL.bit.INPUTOFFSET); Serial.println(":4  bit: 20..23 Positive Mux Setting Offset");
               Serial.print(ADC->INPUTCTRL.bit.GAIN);Serial.println(ID_selection(8,(uint32_t) ADC->INPUTCTRL.bit.GAIN));// Serial.println(":4  bit: 24..27 Gain Factor Selection");
               //Serial.print(ADC->INPUTCTRL.bit.); Serial.println(":4  bit: 28..31 Reserved");
Serial.println("***********************ADC INPUTCTRL******************************");
Serial.println("***********************ADC EVCTRL******************************");
               Serial.print(ADC->EVCTRL.bit.STARTEI); Serial.println(":1 bit: 0 Start Conversion Event In");
               Serial.print(ADC->EVCTRL.bit.SYNCEI); Serial.println(":1 bit: 1 Synchronization Event In");
               //Serial.print(ADC->EVCTRL.bit.); Serial.println(":2 bit: 2.. 3 Reserved");
               Serial.print(ADC->EVCTRL.bit.RESRDYEO); Serial.println(":1 bit: 4 Result Ready Event Out");
               Serial.print(ADC->EVCTRL.bit.WINMONEO); Serial.println(":1 bit: 5 Window Monitor Event Out");
               //Serial.print(ADC->EVCTRL.bit.); Serial.println(":2 bit: 6.. 7 Reserved");
Serial.println("***********************ADC EVCTRL******************************");
Serial.println("***********************ADC WINLT******************************");
              Serial.print(ADC->WINLT.bit.WINLT); Serial.println(":16 bit:  0..15  Window Lower Threshold");
Serial.println("***********************ADC WINLT******************************");
Serial.println("***********************ADC WINUT******************************");
              Serial.print(ADC->WINUT.bit.WINUT); Serial.println(":16 bit:  0..15  Window Upper Threshold");
Serial.println("***********************ADC WINUT******************************");
Serial.println("***********************ADC GAINCORR******************************");
              Serial.print(ADC->GAINCORR.bit.GAINCORR); Serial.println(":12 bit:  0..11  Gain Correction Value");
              //Serial.print(ADC->GAINCORR.bit.); Serial.prinln(":4 bit: 12..15  Reserved");
Serial.println("***********************ADC GAINCORR******************************");
Serial.println("***********************ADC OFFSETCORR******************************");
              Serial.print(ADC->OFFSETCORR.bit.OFFSETCORR); Serial.println(":12 bit:  0..11  Offset Correction Value");
              //Serial.print(ADC->OFFSETCORR.bit.); Serial.println(":4 bit: 12..15  Reserved");
Serial.println("***********************ADC OFFSETCORR******************************");
Serial.println("***********************ADC CALIB******************************");
              Serial.print(ADC->CALIB.bit.LINEARITY_CAL); Serial.println(":8: bit:  0.. 7  Linearity Calibration Value");
              Serial.print(ADC->CALIB.bit.BIAS_CAL); Serial.println(":3 bit:  8..10  Bias Calibration Value");
              //Serial.print(ADC->CALIB.bit.; Serial.println(":5 bit: 11..15  Reserved");
Serial.println("***********************ADC CALIB******************************");
Serial.println("***********************ADC DBGCTRL******************************");
              Serial.print(ADC->DBGCTRL.bit.DBGRUN); Serial.println(":1 bit: 0  Debug Run");
Serial.println("***********************ADC DBGCTRL******************************");

Serial.println("***********************USB PCKSIZE******************************");
              uint32_t *descadd1= (uint32_t *) (USB->DEVICE.DESCADD.reg + (uint32_t) (4));
              
              Serial.println(USB->DEVICE.DESCADD.reg,HEX);
              Serial.println((uint32_t) descadd1,HEX);
              Serial.println(*descadd1,BIN);

Serial.println("***********************USB PCKSIZE******************************");



Serial.println("started");
}
