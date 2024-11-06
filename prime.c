#include <stdio.h>

int main() {
    int limit, sum = 0;
    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int i = 2; i <= limit; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) sum += i;
    }

    printf("Sum of prime numbers up to %d is %d\n", limit, sum);
    return 0;
}
