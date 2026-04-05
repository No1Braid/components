import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

sd_card_ns = cg.esphome_ns.namespace("sd_card")
SDCardComponent = sd_card_ns.class_("SDCardComponent", cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(SDCardComponent),
})

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
