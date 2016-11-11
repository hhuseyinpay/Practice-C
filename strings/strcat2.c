#include <stdio.h>
#include <string.h>

int main()
{
    char *colors[] = {"Red", "Orange", "Yellow", "Green", "Blue", "Purple"};
    char *widths[] = {"Thin", "Medium", "Thick", "Bold"};

    char penText[20];

    int penColor = 3, penThickness = 2;

    strcpy(penText, colors[penColor]);
    strcat(penText, widths[penThickness]);
    printf("My pen is %s\n", penText);

    return 0;
}
