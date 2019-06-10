#include "../../config.h"

#undef IGNORE_MOD_TAP_INTERRUPT // this makes it possible to press caps lock/ctrl key first and then hit another key
#undef USB_MAX_POWER_CONSUMPTION
#define USB_MAX_POWER_CONSUMPTION 50 // this lowers power consumption to work with iPad Pro
#define DEBOUNCE 20 // this might help with accidental duplicate key presses
