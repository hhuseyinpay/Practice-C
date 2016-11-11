/* 
 * C Program to Find the Largest & Smallest Word in a Stirng
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char string[100], word[20], max[20], min[20], c;
    int i = 0, j = 0, flag = 0;

    printf("Enter string: ");
    i = 0; 
    do {
        fflush(stdin);
        c = getchar();
        string[i++] = c;
    } while (c != '\n');
    string[i - 1] = '\0';
    
    for (i = 0; i < strlen(string); i++) {
        while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))
            word[j++] = string[i++];
        
        if (j != 0) {
            word[j] = '\0';
            if (!flag) {
                flag = !flag;
                strcpy(max, word);
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
                strcpy(max, word);
            
            if (strlen(word) < strlen(min))
                strcpy(min, word);

            j = 0;
        }
    }

    printf("The largest word is '%s' and smallest word is '%s' in '%s'.\n",max, min, string);

    return 0;
}
