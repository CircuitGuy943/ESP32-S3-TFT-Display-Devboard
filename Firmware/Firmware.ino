#include <ESP_Panel_Library.h>

// Create panel instance
ESP_Panel *panel = nullptr;

void setup() {
  Serial.begin(115200);
  delay(100);

  // Create panel object
  panel = new ESP_Panel();

  // Initialize and begin
  panel->init();
  panel->begin();

  // Wait a little
  delay(100);

  // Fill screen (RGB888 fill)
  panel->getLcd()->fillScreen(0xFF0000); // Red fill

  delay(1000);

  // Draw some simple text
  panel->getLcd()->drawString(10, 20, "Hello RGB Display",
                              /*color*/ 0x00FF00, /*bg*/ 0x000000);

  Serial.println("Display initialized");
}

void loop() {
  // Rotate/demo loop
  static uint32_t last = millis();
  if (millis() - last > 1000) {
    last = millis();
    // Cycle fill pattern
    static int state = 0;
    uint32_t color;
    if (state == 0) color = 0x0000FF; // Blue
    else if (state == 1) color = 0x00FF00; // Green
    else color = 0xFF0000; // Red

    panel->getLcd()->fillScreen(color);
    state = (state + 1) % 3;
  }
}
