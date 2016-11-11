#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dest_string[50];
    char source_string[] = "Are we not men?";

    strcpy(dest_string, source_string);
    printf("%s\n", dest_string);

    strcpy(dest_string, "Are we having fun yet?");
    printf("%s\n", dest_string);
    
    return 0;
}
