/**
  ******************************************************************************
  * @file   htrace_board.h
  * @author  Mariano G. Scasso
  * @version V0.1
  * @date    2017
  * @brief   mDAC defines, macros, pinouts.
  @verbatim
  @endverbatim
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2021 H+trace</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of H+trace SRL nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

#ifndef IMU_BOARD_H
#define IMU_BOARD_H

#define MEM_ENABLE
//#define BAS_ENABLE
#define WDT_ENABLE
//#define DFU_ENABLE
#define CONFIG_ACC_ENABLED 1

#define SOFTWARE_VERSION "HTRACE_BLE 1.0 " __DATE__


#define SCL_PIN_NUMBER 					8
#define SDA_PIN_NUMBER 					5
#define IMU_CS_PIN_NUMBER				4
#define IMU_SA0_PIN_NUMBER			7
#define IMU_INT1_PIN_NUMBER 		20
#define IMU_INT2_PIN_NUMBER 		17

#define MEM_CS_PIN_NUMBER	14
#define MEM_DO_PIN_NUMBER 15
#define MEM_CLK_PIN_NUMBER 16
#define MEM_DI_PIN_NUMBER 18
#define MEM_RESET_PIN_NUMBER 13

#define HAL_DIS_PIN_NUMBER 0
#define HAL_OUT_PIN_NUMBER 1

#define DS_PIN_NUMBER 6


#define SER_USB_TX_PIN_NUMBER		30
#define SER_USB_RX_PIN_NUMBER		31
#define USB_PRESENT_PIN_NUMBER 	12
#define CHG_STA_PIN_NUMBER 			0
#define VSENSE_ENABLE_PIN_NUMBER 29
#define VSENSE_PIN_NUMBER 			2
#define BUTTON_PIN_NUMBER 			4
#define POWER_OFF_PIN_NUMBER 		24

#define VSENSE_PIN_ADC 						NRF_SAADC_INPUT_AIN0


#ifdef LF_CLOCK_EXT //seleccion de cristal de baja frecuencia (necesario para softdevice)
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}
#else
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_SYNTH,         \
                                 .rc_ctiv       = 0,                              \
                                 .rc_temp_ctiv  = 0,                              \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}	
#endif



																		
#endif // HTRACE_BOARD.h
