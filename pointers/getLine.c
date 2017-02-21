#include <stdio.h>
#include <stdlib.h>

char* getLine(void) {
    const size_t sizeIncrement = 10;
    char* buffer = malloc(sizeIncrement);
    char* currentPosition = buffer;
    size_t maximumLength = sizeIncrement;
    size_t length = 0;
    int character;

    if(currentPosition == NULL) { return NULL; }

    while(1) {
        character = fgetc(stdin);
        if(character == '\n') { break; }

        if(++length >= maximumLength) {
            char *newbuffer = realloc(buffer, maximumLength += sizeIncrement);

            if(newbuffer == NULL) {
                free(buffer);
                return NULL;
            }

            currentPosition = newbuffer + (currentPosition - buffer);
            buffer = newbuffer;
        }
        *currentPosition++ = character;
    }
    *currentPosition = '\0';
    return buffer;
}
int main() {

    printf("%s\n", getLine());
    return 0;
}
