#include "sd_card.h"
#include "esphome/core/log.h"

namespace esphome {
namespace sd_card {

static const char *const TAG = "sd_card";

void SDCardComponent::setup() {
  ESP_LOGI(TAG, "SD Card setup()");
  ESP_LOGI(TAG, "CS: %d, MOSI: %d, MISO: %d, CLK: %d", cs_pin_, mosi_pin_, miso_pin_, clk_pin_);
}

void SDCardComponent::loop() {
  // Placeholder loop
}

}  // namespace sd_card
}  // namespace esphome
