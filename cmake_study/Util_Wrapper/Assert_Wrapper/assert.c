#include "assert.h"

bool is_null(const void *ptr) {
    return (ptr == NULL);
}

bool is_out_of_bounds(int index, int size) {
    return (index < 0 || index >= size);
}

bool is_within_range(int value, int min, int max) {
    return (value >= min && value <= max);
}

bool is_above_zero(int value){
    return (value > 0);
}

