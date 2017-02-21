#include <stdio.h>
#include <stdlib.h>

float average(int *arr, int size) {
    int sum;

    printf("arr: %p\n",arr);
    printf("&arr: %p\n", &arr);
    printf("size: %p\n",&size);
    printf("sum: %p\n", &sum);
    printf("%p\n", &sum);
    return 1.0;
}

int main(void) {

    int vector[5] = {1, 2, 3, 4, 5};
    int *pv = vector;

    printf("%p\n",vector);
    printf("%p\n",&vector[0]);
    printf("*pv+1: %d", *(pv));
    return 0;
}
