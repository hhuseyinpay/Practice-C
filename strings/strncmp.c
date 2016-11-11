#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int comparison;
    char string1[] = "dogberry";
    char string2[] = "aaawood";

    comparison = strncmp(string1, string2, 3);
    printf("%d\n", comparison);

    return 0;
}
