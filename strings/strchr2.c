#include <stdio.h>
#include <string.h>

int main() 
{
    char *t = "MEAS:VALT:DC?";
    char *p;
    p = t;
    puts(p);
    while ((p = strchr(p, ':')) != NULL) {
        puts(++p);
    }
    return 0;
}
