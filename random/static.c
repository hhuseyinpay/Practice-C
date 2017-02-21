#include <stdio.h>

void fn() {
    int i;
    for(i = 0; i < 10; i++){
        static int count = 0;
        printf("%d\n", count++);
    }
}


int main() {

    fn();
    return 0;
}
