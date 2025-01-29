#include <stdio.h>

int main() {
    long long x;
    int digitCount[10] = {0};

    printf("Введите неотрицательное число x: ");
    if (scanf("%lld", &x) != 1 || x < 0) {
        printf("Введено отрицательное число\n");
        return 0;
    }

    if (x == 0) {
        digitCount[0]++;
    } else {
        while (x > 0) {
            int digit = x % 10;
            digitCount[digit]++;
            x /= 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            printf("Количество %d - %d\n", i, digitCount[i]);
        }
    }

    return 0;
}
