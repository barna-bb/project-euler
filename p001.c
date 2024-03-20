// Problem 1

#include <stdio.h>

int main() {

    int sum = 0;
    int i;
    for (i = 3; i < 1000; i++) {
        if (i % 3 != 0) {
            if (i % 5 != 0) {
                continue;
            }
        }
        sum += i;
    }

    printf("%d", sum);

    return 0;
}