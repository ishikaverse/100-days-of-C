//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, max = 0, most = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n < 0) {
        n = -n;
    }

    do {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    } while(n > 0);

    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }

    printf("Most frequent digit = %d\n", most);
    printf("Frequency = %d", max);

    return 0;
}
