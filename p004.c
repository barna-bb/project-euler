// Problem 4

#include <stdio.h>

const int min = 100;
const int max = 999;

int reverse(int n) {
    int reversed = 0;
    int remainder = 0;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}

int main() {

    int i = max;
    int j = max;
    int s = 0;
    int n = 0;
    while (i >= min) {
        j = max;
        while (j >= min) {
            s = i * j;
            // All palindromes with even digits are divisible by 11
            if ((s > 99999 && s % 11 == 0) || s <= 99999) {
                if (s == reverse(s) && s > n) {
                    n = s;
                }
            }
            j--;
        }
        i--;
    }

    printf("%d", n);

    return 0;
}