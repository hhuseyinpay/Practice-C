#include <stdio.h>

int main() 
{
    FILE *my_stream;

    my_stream = fopen("snazzyjazz.txt", "r");
    if (my_stream == NULL) 
        printf("File could not be opened\n");
    else {
        printf("File opend! Closing it now...\n");
        fclose(my_stream);
    }
    
    return 0;
}
