#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50];

    strcpy(s1, "Tweedledee ");
    strcpy(s2, "Tweedledum");
    strncat(s1, s2, 7);
    puts(s1);

    return 0;
}
