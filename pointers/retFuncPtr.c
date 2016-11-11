#include <stdio.h>

int add(int num1, int num2) { 
    return num1 + num2;
}
int subtract(int num1, int num2) { 
    return num1 - num2;
}

typedef int (*fptrOperation)(int,int);

int compute(fptrOperation operation, int num1, int num2) {
    return operation(num1, num2); 
}

fptrOperation select(char opcode) {
    switch(opcode) {
        case '+': return add;
        case '-': return subtract;
    }
    return NULL;
}

int evaluate(char opcode, int num1, int num2) {
    fptrOperation operation = select(opcode);
    return operation(num1, num2);
}

int main() {
    printf("%d\n", evaluate('+', 5, 6));
    printf("%d\n", evaluate('-', 5,6));

    return 0; 
}
