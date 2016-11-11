#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *pv = (int*) malloc(5*sizeof(int));    
    for (int i=0; i < 5; i++) {
        pv[i] = i+1;
    }
    
    int *pv2;
    pv2 = (int*) malloc(5*sizeof(int));
    for (int i=0; i < 5; i++) {
        *(pv+i) = i+1;
    }

    int* arr[5];
    for (int i=0; i<5; i++) {
        arr[i] = (int*)malloc(sizeof(int));
        *arr[i] = i;
    }

    int*arr2[5];
    for (int i=0; i < 5; i++) {
        *(arr+i) = (int*)malloc(sizeof(int));
        **(arr+i) = i;
    }

    printf("&arr2= %p\n&arr2[0]= %p\n&arrr2[0][0]= %p\narr2= %p\n",&arr2, &arr2[0], &arr2[0][0],arr2);
}
