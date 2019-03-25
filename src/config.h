#ifndef CONFIG_H
#define CONFIG_H

/* Constants -- do not modify */

#define I2C_DRIVER_ASYNC (0)
#define I2C_DRIVER_SYNC (1)

#define OLED_DRIVER_SSD1306 (1)
#define OLED_DRIVER_SH1106 (2)

/* End of constants */


#define I2C_DRIVER (I2C_DRIVER_SYNC)
#define I2C_CLOCK (400000L)

#define OLED_DRIVER (OLED_DRIVER_SSD1306)
#define OLED_DRAW_BUFFER_SIZE (8)

#define DISPLAY_A_ADDRESS (0x7A)
#define DISPLAY_B_ADDRESS (0x78)


#define INCLUDE_CALIBRATION (1)

#define CALIBRATION_ZERO_PORT (PORTB)
#define CALIBRATION_ZERO_PIN (PINB)
#define CALIBRATION_ZERO_P (PB4)

#define CALIBRATION_REF_PORT (PORTB)
#define CALIBRATION_REF_PIN (PINB)
#define CALIBRATION_REF_P (PB3)

#define CALIBRATION_RESET_PORT (PORTB)
#define CALIBRATION_RESET_PIN (PINB)
#define CALIBRATION_RESET_P (PB5)


#define ADC_CHANNEL_L_NEEDLE (0)
#define ADC_CHANNEL_L_PEAK (2)
#define ADC_CHANNEL_R_NEEDLE (1)
#define ADC_CHANNEL_R_PEAK (3)


#define NEEDLE_MIN_ANGLE (0)
#define NEEDLE_MAX_ANGLE (255)
#define NEEDLE_ZERO_VU_ANGLE (181)
#define PEAK_LEVEL 63 / 10


#define ENABLE_WATERMARK (0)
#define ENABLE_SPLASH_SCREEN (0)
#define SPLASH_SCREEN_TIME_MS (3000)
#define BLANK_TIME_FRAMES (10)

#define PEAK_POSITION_X (107)
#define PEAK_POSITION_Y (7)
#define WATERMARK_POSITION_X (0)
#define WATERMARK_POSITION_Y (7)

#define DISPLAY_LEFT_ADDRESS (DISPLAY_A_ADDRESS)
#define DISPLAY_LEFT_FLIPPED (0)
#define DISPLAY_LEFT_BACKGROUND IMG_BACKGROUND
#define DISPLAY_LEFT_PEAK_INDICATOR IMG_PEAK_INDICATOR
#define DISPLAY_LEFT_SPLASH IMG_NONE
#define DISPLAY_LEFT_WATERMARK IMG_NONE

#define DISPLAY_RIGHT_ADDRESS (DISPLAY_B_ADDRESS)
#define DISPLAY_RIGHT_FLIPPED (0)
#define DISPLAY_RIGHT_BACKGROUND IMG_BACKGROUND
#define DISPLAY_RIGHT_PEAK_INDICATOR IMG_PEAK_INDICATOR
#define DISPLAY_RIGHT_SPLASH IMG_NONE
#define DISPLAY_RIGHT_WATERMARK IMG_NONE

#endif /* CONFIG_H */
