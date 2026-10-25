//Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, largest, second;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Second largest element does not exist");
        return 0;
    }

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = INT_MIN;

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
            found = 1;
        }
        else if(arr[i] < largest &&
                (!found || arr[i] > second)) {
            second = arr[i];
            found = 1;
        }
    }

    if(found) {
        printf("Second largest element = %d", second);
    }
    else {
        printf("Second largest element does not exist");
    }

    return 0;
}
