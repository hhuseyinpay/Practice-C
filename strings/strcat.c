#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char string1[50] = "Hello, ";
    char string2[] = "world!\n";
    strcat(string1, string2);
    printf(string1);

    return 0;
}
