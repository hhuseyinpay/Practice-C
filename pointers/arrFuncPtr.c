#include <stdio.h>

int add(int num1, int num2) { 
    return num1 + num2;
}
int subtract(int num1, int num2) { 
    return num1 - num2;
}

typedef int (*fptrOperation)(int,int);
typedef int (*Operation)(int, int);
Operation operations[128] = {NULL};
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

void initializeOperationsArray() {
    operations['+'] = add;
    operations['-'] = subtract;
}

int evaluateArray(char opcode, int num1, int num2) {
    fptrOperation Operation;
    Operation = operations[opcode];
    return Operation(num1, num2);
}

int main() {
    
    initializeOperationsArray();
    printf("%d\n", evaluateArray('+', 5, 6));
    printf("%d\n", evaluateArray('-', 5, 6));

    return 0; 
}
