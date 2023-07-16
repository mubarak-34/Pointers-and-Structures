#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are:\n");
    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++; 
    }

    return 0;
}

