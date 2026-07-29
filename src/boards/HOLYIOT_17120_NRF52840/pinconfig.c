board_init();

led_blink(100);

tusb_init();

board_delay(3000);

if (!usb_activity)
{
    bootloader_app_start();
}