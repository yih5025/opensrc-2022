#include <stdlib.h>
#include <string.h>


char *copy(char* origin) {
    int len = strlen(origin)+1;
    char* copied = malloc(sizeof(char)*len);
    for(int i=0; i<len; i++) {
        copied[i] = origin[i];
    }
    return copied;
}
