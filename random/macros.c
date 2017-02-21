#include <stdio.h>

main() {

    printf("File : %s\n", __FILE__);
    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("Line : %s\n", __LINE__);
    printf("ANSI : %s\n", __STDC__);
}
