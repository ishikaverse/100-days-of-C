//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int a[100], n, i;
    int positive = 0, negative = 0, zero = 0;

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
        if (a[i] > 0) {
            positive++;
        }
        else if (a[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d", zero);

    return 0;
}
