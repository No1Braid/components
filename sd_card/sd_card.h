#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace sd_card {

class SDCardComponent : public Component {
 public:
  void setup() override;
  void loop() override;
};

}  // namespace sd_card
}  // namespace esphome
