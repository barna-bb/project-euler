// Problem 6

#include <stdio.h>
#include <stdlib.h>

int main() {

    const int limit = 100;

    // From the formula of sums
    unsigned long long sqs = limit * (limit + 1) / 2;
    sqs = sqs * sqs;
    // Derived formula 
    unsigned long long ssq = limit * (2 * limit + 1) * (limit + 1) / 6;

    printf("%llu", abs(sqs-ssq));

    return 0;
}