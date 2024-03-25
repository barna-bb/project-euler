// Problem 2

#include <stdio.h>
#include <stdbool.h>

const int max = 4000000;

int main() {

    unsigned int n = 2;
    unsigned int m = 1;
    unsigned int temp = 0;
    unsigned long sum = 0;

    while (n <= max) {
        if (n % 2 == 0) {
            sum += n;
        }
        temp = n + m;
        m = n;
        n = temp;
    }

    printf("%lu", sum);

    return 0;
}