#include <stdio.h>

int main()
{
    FILE *my_stream;
    char my_filename[] = "snazzyjazz.txt";
    int close_error;

    my_stream = fopen(my_filename, "w");
    fprintf(my_stream, "Just alittle gello from fprintf.\n");

    close_error = fclose(my_stream);

    if (close_error != 0) 
        printf("File could not be closed.\n");
    else
        printf("File closed.\n");
    
    return 0;
        
}
