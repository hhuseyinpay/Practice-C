#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float val;
    char str[20];

    strcpy(str, "98993489");
    val = atof(str);
    printf("String value = %s, Float value = %f\n", str, val);

    strcpy(str, "tutorialspoint.com");
    val = atof(str);
    printf("String value = %s, Float value = %f\n", str, val);

    return 0;
}
