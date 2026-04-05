#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace sd_card {

class SDCardComponent : public Component {
 public:
  void setup() override;
  void loop() override;

  void set_cs_pin(int pin) { cs_pin_ = pin; }
  void set_mosi_pin(int pin) { mosi_pin_ = pin; }
  void set_miso_pin(int pin) { miso_pin_ = pin; }
  void set_clk_pin(int pin) { clk_pin_ = pin; }

 protected:
  int cs_pin_;
  int mosi_pin_;
  int miso_pin_;
  int clk_pin_;
};

}  // namespace sd_card
}  // namespace esphome
