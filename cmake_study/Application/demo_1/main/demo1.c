#include <stdio.h>
#include <unistd.h>
#include "demo1.h"
#include "log.h"
void print_every_sec(){
    while(1) {
        LOGD("hello demo1\n");
        printf("hello demo1\n");
        sleep(1); // 暂停1秒
    }
    return 0;
}

int main() {
    print_every_sec();
}