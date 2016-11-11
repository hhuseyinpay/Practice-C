#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    long my_value;
    char my_string[] = "+2000000000";
    my_value = atol(my_string);
    printf("%ld\n", my_value);

    return 0;
}
