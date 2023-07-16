#include <stdio.h>

int* sum(int num1, int num2) {
    int result = num1 + num2;
    int *point = &result;
    return ptr;
}

int main() {
    int num1, num2;
    
    printf("Enter the numbers: ");
    scanf("%d%d", &num1, &num2);
    
    int *sum_point = sum(num1, num2);
    
    printf("The sum of %d and %d is: %d\n", num1, num2, *sum_point);
    
    return 0;
}

