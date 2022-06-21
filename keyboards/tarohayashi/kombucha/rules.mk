# CPU
MCU = atmega32u4
BOOTLOADER = caterina

# FEATURE
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = custom
ENCODER_ENABLE     = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
RGB_MATRIX_CUSTOM_KB = yes
LTO_ENABLE = yes
SRC += i2c_master.c paw3204.c

# ETC
BOOTMAGIC_ENABLE = no     	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes      	# Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspendNKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
MAGIC_ENABLE = no
MUSIC_ENABLE = no
