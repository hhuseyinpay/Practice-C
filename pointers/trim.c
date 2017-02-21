#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* trim(char* phrase) {
    char* old = phrase;
    char* new = phrase;

    while(*old == ' ') {
        old++;
    }

    while(*old) {
        *(new++) = *(old++);
    }

    *new = 0;
    return (char*) realloc(phrase, strlen(phrase)+1);
}

int main() {
    char * buffer = (char*)malloc(strlen("  cat asdf ")+1);
    strcpy(buffer, "  cat");
    printf("%s\n", trim(buffer));

    return 0;
}
