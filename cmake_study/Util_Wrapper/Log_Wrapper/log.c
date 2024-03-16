#include "log.h"
#include <stdarg.h>
#include <time.h>

static void print_timestamp() {
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    char timestamp[20]; // Buffer for timestamp (YYYY-MM-DD HH:MM:SS)
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", timeinfo);
    fprintf(stdout, "[%s] ", timestamp);
}

void LOG_inner(const char *function, const char *format, ...) {
    print_timestamp();
    va_list args;
    va_start(args, format);
    vfprintf(stdout, format, args);
    va_end(args);
}
