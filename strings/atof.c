#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    double my_value;
    char my_string[] = "+1776.23";
    my_value = atof(my_string);
    printf("%f\n", my_value);

    return 0;
}

