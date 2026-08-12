#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// --- System Core ---
#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000
#define BUILTIN_LED_GPIO         GPIO_NUM_3
#define BOOT_BUTTON_GPIO         GPIO_NUM_0

// --- Audio (Speaker & Microphone) ---
// Speaker (GND/BLCK -> IO45, LRCLK -> IO39, DIN -> IO0)
#define AUDIO_I2S_SPK_GPIO_BCLK  GPIO_NUM_45
#define AUDIO_I2S_SPK_GPIO_LRCK  GPIO_NUM_39
#define AUDIO_I2S_SPK_GPIO_DOUT  GPIO_NUM_0
#define AUDIO_I2S_SPK_GPIO_GAIN  GPIO_NUM_NC

// Microphone (SCK -> IO8, WS -> IO46, SD -> IO48)
#define AUDIO_I2S_MIC_GPIO_SCK   GPIO_NUM_8
#define AUDIO_I2S_MIC_GPIO_WS    GPIO_NUM_46
#define AUDIO_I2S_MIC_GPIO_DIN   GPIO_NUM_48

// --- Sensors & Servos ---
// Ultrasonic Sensor (Trig -> IO5, Echo -> IO6)
#define ULTRASONIC_TRIG_GPIO     GPIO_NUM_5
#define ULTRASONIC_ECHO_GPIO     GPIO_NUM_6

// Neck Servo / Cat Face (Signal -> IO4)
#define NECK_SERVO_GPIO          GPIO_NUM_4

// --- OLED Screen (I2C Face Display) ---
#define DISPLAY_I2C_SDA_GPIO     GPIO_NUM_SDA  // Or match board standard I2C pins
#define DISPLAY_I2C_SCL_GPIO     GPIO_NUM_SCL

// --- LED Lights ---
#define LEFT_LED_GPIO            GPIO_NUM_3
#define LEFT_LED_EXTRA_GPIO      GPIO_NUM_38
#define RIGHT_LED_GPIO           GPIO_NUM_40
#define RIGHT_LED_EXTRA_GPIO     GPIO_NUM_41

// --- Line Tracking Sensors ---
#define LINE_TRACK_S1_GPIO       GPIO_NUM_16
#define LINE_TRACK_S2_GPIO       GPIO_NUM_NC  // Tied to 3V3 constant read if static, or configure pin
#define LINE_TRACK_S3_GPIO       GPIO_NUM_17  // Ground reference / data line

#endif // _BOARD_CONFIG_H_
