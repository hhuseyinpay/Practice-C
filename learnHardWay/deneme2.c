#include <stdio.h>

int main()
{
    const int limit = 100;
    const int * const cpci = &limit; 
    const int * const * pcpci;

    printf("%d\n %p\n",*cpci,*pcpci);
    pcpci = &cpci;
    printf("%d\n",**pcpci);
}

