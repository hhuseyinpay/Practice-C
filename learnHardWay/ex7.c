/*
 * =====================================================================================
 *
 *       Filename:  ex7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/06/2016 13:10:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
         'H', 'a', 's', 'a', 'n',
         ' ', 'H', ' ',
            'P', 'a', 'y', '\0'
    };

    //WARNING: On some system you may have change the
    //%ld in this code to a %u since it will use unsignet ints.
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas: %ld\n", 
        sizeof(areas) / sizeof(int));
    printf("The fisrt area is %d, the 2nd %d.\n",
        areas[0],areas[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",
        sizeof(name));
    printf("The number of chars: %ld\n",
            sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n",
            sizeof(full_name));
    printf("The number of chars: %ld\n",
        sizeof(name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n",
        name, full_name);
    return 0;
}    
