#ifndef BOARD_CHECK_H
#define BOARD_CHECK_H

#include <stdio.h>
#include "log.h"
bool is_gpio_valid(int pin);

bool is_gpio_used(int pin);

bool is_freq_supported(uint32_t freq);

#endif /* BOARD_CHECK_H */
