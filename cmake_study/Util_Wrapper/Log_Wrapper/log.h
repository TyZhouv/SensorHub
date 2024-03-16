#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

void LOG_inner(const char *function, const char *format, ...);
/* Log an informational message.
 * Parameters:
 *   format: Format string for the message.
 *   ...   : Optional arguments for the format string.
 * Returns:
 *   None
 * Example:
 *   LOGI("This is an informational message.\n");
 */
#define LOGI(format, ...) LOG_inner(__func__, "[INFO] " format, ##__VA_ARGS__)

/* Log a debug message.
 * Parameters:
 *   format: Format string for the message.
 *   ...   : Optional arguments for the format string.
 * Returns:
 *   None
 * Example:
 *   LOGD("This is a debug message.\n");
 */
#define LOGD(format, ...) LOG_inner(__func__, "[DEBUG] " format, ##__VA_ARGS__)

/* Log a warning message.
 * Parameters:
 *   format: Format string for the message.
 *   ...   : Optional arguments for the format string.
 * Returns:
 *   None
 * Example:
 *   LOGW("This is a warning message.\n");
 */
#define LOGW(format, ...) LOG_inner(__func__, "[WARNING] " format, ##__VA_ARGS__)

/* Log an error message.
 * Parameters:
 *   format: Format string for the message.
 *   ...   : Optional arguments for the format string.
 * Returns:
 *   None
 * Example:
 *   LOGE("This is an error message.\n");
 */
#define LOGE(format, ...) LOG_inner(__func__, "[ERROR] " format, ##__VA_ARGS__)

#endif /* LOG_H */
