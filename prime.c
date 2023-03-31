#include <stdio.h>

int main() {
    int num;
    int i;
    int is_prime = 1; // assume num is prime

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if num is prime
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            is_prime = 0; // num is not prime
            break;
        }
    }

    if (is_prime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
