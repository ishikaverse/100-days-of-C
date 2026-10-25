//Find the sum of array elements.

#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements");
        return 1;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
