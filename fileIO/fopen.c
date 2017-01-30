#include <stdio.h>

int main() 
{
    FILE *my_stream;
    my_stream = fopen("foo", "r");
    fclose(my_stream); 
}
