#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int comparison;
    char string1[] = "alpha";
    char string2[] = "beta";

    comparison = strcmp(string1, string2);
    printf("%d\n", comparison);
    
    return 0;
}
