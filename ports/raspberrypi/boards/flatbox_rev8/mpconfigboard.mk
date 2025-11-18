# IDs are for a Horipad so that we get a chance for correct button mapping
USB_VID = 0x0F0D
USB_PID = 0x00C1
USB_PRODUCT = "Flatbox rev8"
USB_MANUFACTURER = "Hosaka"

CHIP_VARIANT = RP2350
CHIP_PACKAGE = A
CHIP_FAMILY = rp2

EXTERNAL_FLASH_DEVICES = "W25Q128JVxQ"

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_HID
