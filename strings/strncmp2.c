#include <stdio.h>
#include <string.h>

#define ANSWER "blue"

int main() 
{
    char t[100];
    puts("What is the secret color=");
    gets(t);
    while (strncmp(t, ANSWER, 6) != 0) {
        puts("Wrong, try again.");
        gets(t);
    }
    puts("Right!");
}
