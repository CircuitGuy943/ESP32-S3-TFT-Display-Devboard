#pragma once
#include <LovyanGFX.hpp>

class LGFX : public lgfx::LGFX_Device
{
  lgfx::Panel_Device* _panel;  // panel pointer

public:

  LGFX(void)
  {
    /* Allocate the panel dynamically */
    auto panel = new lgfx::Panel_RGB();
    
    auto cfg = panel->config();

    // Pixel clock & control pins
    cfg.pin_pclk = 8;
    cfg.pin_hsync = 45;
    cfg.pin_vsync = 48;
    cfg.pin_de    = 1;
    cfg.pin_rst   = -1;

    // RGB data pins (your pinout)
    cfg.pin_d0  = 38;  // B0
    cfg.pin_d1  = 39;  // B1
    cfg.pin_d2  = 40;  // B2
    cfg.pin_d3  = 41;  // B3
    cfg.pin_d4  = 42;  // B4

    cfg.pin_d5  = 9;   // G0
    cfg.pin_d6  = 10;  // G1
    cfg.pin_d7  = 11;  // G2
    cfg.pin_d8  = 12;  // G3
    cfg.pin_d9  = 13;  // G4
    cfg.pin_d10 = 14;  // G5

    cfg.pin_d11 = 4;  // R0
    cfg.pin_d12 = 5;  // R1
    cfg.pin_d13 = 6;  // R2
    cfg.pin_d14 = 7;  // R3
    cfg.pin_d15 = 15; // R4

    // Timing defaults
    cfg.hsync_pulse_width = 10;
    cfg.hsync_back_porch  = 20;
    cfg.hsync_front_porch = 10;
    cfg.vsync_pulse_width = 10;
    cfg.vsync_back_porch  = 10;
    cfg.vsync_front_porch = 10;

    cfg.freq_write = 12000000;  // pixel clock frequency

    cfg.rgb_order = false;
    cfg.invert = false;

    panel->config(cfg);

    _panel = panel;

    setPanel(_panel);  // set panel for LGFX_Device
  }
};