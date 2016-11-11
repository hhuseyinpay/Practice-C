/*
 * C Program To Print Smallest and Biggest possible Word 
 * which is Palindrome in a given String
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int i = 0, l = 0, j, k, space = 0, count = 0, init = 0, min = 0, max = 0, len = 0, flag;
    char a[100], b[30][20], c[30], d[30], minP[30], maxP[30];
 
    printf("Read a string:\n");
    fflush(stdin);
    scanf("%[^\n]s", a);
    for (i = 0;a[i] != '\0';i++) 
    {
        if (a[i] == ' ')
            space++;
    }
    i = 0;
    for (j = 0;j<(space+1);i++, j++)
    {
        k = 0;
        while (a[i] != '\0')
        {
            if (a[i] == ' ')
            {
                break;
            }
            else
            {
                b[j][k++] = a[i];
                i++;
            }
        }
        b[j][k] = '\0';
    }
    for (j = 0;j < space + 1;j++)
        printf("%s ", b[j]);
    printf("\n");
    for (i = 0;i < space + 1;i++)
    {
        strcpy(c, b[i]); 
        count = strlen(b[i]);
        k = 0;
        for (l = count - 1;l >= 0;l--)
            d[k++] = b[i][l];
        d[k] = '\0';
        if (strcmp(d, c) == 0)                {
            flag = 1;
        if (init < 1) 
        {
            strcpy(minP, d);
            strcpy(maxP, d);
            min = strlen(minP);
            max = strlen(maxP);
            init++;
        }
        printf("String %s is a Palindrome\n", d);
        len = strlen(d);
        if (len >= max)
            strcpy(maxP, d);
        else if (len <= min)
            strcpy(minP, d);
        else
            printf("");
        }
    }
    if (flag == 1)
    {
        printf("The minimum palindrome is %s\n", minP);
        printf("The maximum palindrome is %s\n", maxP);
    }
    else
        printf("given string has no pallindrome\n");
}
