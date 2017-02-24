#include <stdio.h>

int main()
{
    int vector[5];
    printf("%d\n", sizeof(vector)/sizeof(int));

    printf("%p\n",vector);
    printf("%p\n",&vector[0]);

    int matrix[2][3];
    for (int i = 0; i < 2; i++) {
        printf("&matrix[%d]: %p sizeof(matrix[%d]): %d\n",
                i, &matrix[i], i, sizeof(matrix[i]));
    }

    printf("-----------------\n");
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof('a'));

    return 0;

}
