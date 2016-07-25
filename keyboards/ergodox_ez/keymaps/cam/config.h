#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// Disable LED blinking during sleep
#undef SLEEP_LED_ENABLE
#define SLEEP_LED_ENABLE no

// Tap left shift for (, right shift for {
#define LSPO_KEY KC_9
#define RSPC_KEY KC_LBRC

#endif
