import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

CONF_CS_PIN = "cs_pin"
CONF_MOSI_PIN = "mosi_pin"
CONF_MISO_PIN = "miso_pin"
CONF_CLK_PIN = "clk_pin"

sd_card_ns = cg.esphome_ns.namespace("sd_card")
SDCardComponent = sd_card_ns.class_("SDCardComponent", cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(SDCardComponent),
    cv.Required(CONF_CS_PIN): cv.int_,
    cv.Required(CONF_MOSI_PIN): cv.int_,
    cv.Required(CONF_MISO_PIN): cv.int_,
    cv.Required(CONF_CLK_PIN): cv.int_,
})

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])

    cg.add(var.set_cs_pin(config[CONF_CS_PIN]))
    cg.add(var.set_mosi_pin(config[CONF_MOSI_PIN]))
    cg.add(var.set_miso_pin(config[CONF_MISO_PIN]))
    cg.add(var.set_clk_pin(config[CONF_CLK_PIN]))

    await cg.register_component(var, config)
