#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int string_length;
    char my_string[] = "fnord";

    string_length = strlen(my_string);
    printf("%d\n", string_length);

    return 0;
}
