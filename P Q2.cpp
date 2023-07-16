#include <stdio.h>

void addNumbers(int* num1, int* num2, int* result) {
    *result = *num1 + *num2;
}

int main() {
    int num1, num2, sum;
    
    printf("Enter the numbers: ");
    scanf("%d%d", &num1, &num2);
    
    addNumbers(&num1, &num2, &sum);
    
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
