// Problem 206

#include <stdio.h>
#include <stdbool.h>

const int p[] = {9,8,7,6,5,4,3,2,1};

bool check(unsigned long long n) {

    int i = 0;

    while (i < 8) {
        if (n % 10 != p[i]) {
            return false;
        }
        n /= 100;
        i++;
    }
    return true;
}

int main() {

    unsigned long long i;
    unsigned long long min = 1010101010;
    unsigned long long max = 1389026623;
    unsigned long long s;

    for (i = min; i <= max; i += 10) {
        s = i * i;
        if (check(s / 100)) {
            printf("%llu", i);
            break;
        }
    }

    return 0;
}