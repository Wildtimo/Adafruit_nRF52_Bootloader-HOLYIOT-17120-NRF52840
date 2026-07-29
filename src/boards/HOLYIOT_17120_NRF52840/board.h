#ifndef HOLYIOT_17120_H
#define HOLYIOT_17120_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/

#define LEDS_NUMBER       1
#define LED_PRIMARY_PIN   33      // P1.01 = (1*32)+1
#define LED_STATE_ON      1

// No secondary LED
#define LED_SECONDARY_PIN 0xFF


/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/

// No buttons on this board
// DFU is entered by USB bootloader timeout or software reset

#define BUTTON_DFU        0xFF
#define BUTTON_DFU_OTA    0xFF
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP


//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+

#define BLEDIS_MANUFACTURER "HOLYIOT"
#define BLEDIS_MODEL        "17120 NRF52840"


//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

#define USB_DESC_VID          0x239A
#define USB_DESC_UF2_PID      0x00DA
#define USB_DESC_CDC_ONLY_PID 0x00DA

#define UF2_PRODUCT_NAME      "HOLYIOT-17120 nRF52840"
#define UF2_BOARD_ID          "HOLYIOT-17120-nRF52840-v1"
#define UF2_INDEX_URL         "https://www.holyiot.com"


#endif // HOLYIOT_17120_H