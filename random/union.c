#include <stdio.h>

union Deneme{
    int a;
    int b;
};
int main() {

    union Deneme dene;
    dene.a=5;
    printf("a: %d\nb: %d\n ",dene.a, dene.b);

    return 0;
}
