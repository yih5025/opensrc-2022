#include <stdio.h>
#include "copy.h"

int main(void) {
    char* str1 = "IoT Hello! in Media Labs";
    char* str2 = copy(str1);

    printf("str2: %s", str2);
    return 0;
}
