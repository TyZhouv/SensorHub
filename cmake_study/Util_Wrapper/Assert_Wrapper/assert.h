#ifndef ASSERT_H
#define ASSERT_H

#include <stdbool.h>
#include <stdio.h>
#include "log.h"
/* Check if a pointer is NULL.
 * Parameters:
 *   ptr: Pointer to be checked.
 * Returns:
 *   true if ptr is NULL, false otherwise.
 */
bool is_null(const void *ptr);

/* Check if an index is out of bounds for an array.
 * Parameters:
 *   index: Index to be checked.
 *   size: Size of the array.
 * Returns:
 *   true if index is out of bounds, false otherwise.
 */
bool is_out_of_bounds(int index, int size);

/* Check if a value is within a specified range.
 * Parameters:
 *   value: Value to be checked.
 *   min: Minimum value of the range.
 *   max: Maximum value of the range.
 * Returns:
 *   true if value is within [min, max], false otherwise.
 */
bool is_within_range(int value, int min, int max);

bool is_above_zero(int value);
#endif /* ASSERT_H */
