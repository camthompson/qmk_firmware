#include "../../config.h"

#undef IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)
#undef USB_MAX_POWER_CONSUMPTION
#define USB_MAX_POWER_CONSUMPTION 50 // this lowers power consumption to work with iPad Pro
#define DEBOUNCE 10 // this might help with accidental duplicate key presses
