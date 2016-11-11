#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int my_value;
    char my_string[] = "-23.5";
    my_value = atoi(my_string);
    printf("%d\n", my_value);

    return 0;
}
