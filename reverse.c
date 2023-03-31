#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("%d", reversed_num);

    return 0;
}