#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[100], s2[100];

    strcpy(s1, "xxxxxx 1");
    strcpy(s2, "zzzzzz 2");

    puts("Original strings: ");
    puts("");
    puts(s1);
    puts(s2);
    puts("");

    strncpy(s2, s1, 5);

    puts("New strings: ");
    puts("");
    puts(s1);
    puts(s2);
}
