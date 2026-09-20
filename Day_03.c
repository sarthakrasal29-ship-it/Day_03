
// addition , subtraction , multiplication , division

#include <stdio.h>

int main() {
    
    int a, b;
    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d", a / b);
    
    return 0;

}


