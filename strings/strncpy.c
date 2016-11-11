#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char dest_string[50];
    char source_string[] = "Are we not men?";

    strncpy(dest_string, source_string, 6);
    printf("%s\n", dest_string);

    return 0;
}
