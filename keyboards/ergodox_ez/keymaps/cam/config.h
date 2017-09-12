#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// Tap left shift for (, right shift for {
#define LSPO_KEY KC_9
#define RSPC_KEY KC_LBRC

#undef IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

#endif
