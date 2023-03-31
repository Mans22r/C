#include <stdio.h>

int main() {
    int num;
    int i;
    long long fact = 1;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);

    return 0;
}
