#include "sd_card.h"
#include "esphome/core/log.h"

namespace esphome {
namespace sd_card {

static const char *const TAG = "sd_card";

void SDCardComponent::setup() {
  ESP_LOGI(TAG, "SD Card component setup()");
}

void SDCardComponent::loop() {
  // Placeholder loop
}

}  // namespace sd_card
}  // namespace esphome
