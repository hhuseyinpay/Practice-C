#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[50] = "Hello, world! ";
    char string2[] = "Bye now!";
    strncat(string1, string2, 3);
    printf("%s\n", string1);

    return 0;
}
