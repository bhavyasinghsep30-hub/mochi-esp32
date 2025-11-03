#pragma once

// --- WiFi Configuration ---
#define WIFI_SSID "Recoil_5G"
#define WIFI_PASS "Encrypted"

// --- Web Server Configuration ---
#define WEB_SERVER_PORT 5001

// --- Hardware Pins (ESP32-C3) ---
// I2C for SSD1306 Display
#define OLED_SDA_PIN 20
#define OLED_SCL_PIN 21
#define OLED_RESET_PIN -1 // -1 if not used

// Touch Button Pin
#define TOUCH_PIN 1

// --- Display Configuration ---
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define FRAME_BUFFER_SIZE (SCREEN_WIDTH * SCREEN_HEIGHT / 8)
#define FRAME_DELAY_MS 100 // Delay between animation frames (10 FPS)
#define MAX_ANIMATION_FRAMES 20

// --- Touch Sensor Configuration ---
#define TOUCH_TIMEOUT_MS (3 * 60 * 1000) // 3 minutes
#define TOUCH_DEBOUNCE_MS 200 // 200 milliseconds
#define TOUCH_TARGET_URL "http://host.wokwi.internal:5000/touch"
