// Problem 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUMBER 600851475143


int main() {

    // --- Sieve of Eratosthenes ---

    const unsigned long long limit = sqrt(NUMBER + 1);

    unsigned long long i = 0;
    unsigned long long j = 0;
    unsigned long long m = 0;

    // Prime List
    int *primes;
    primes = malloc(sizeof(int) * limit);

    // Flag all as Prime
    for (i = 0; i < limit; i++) {
        primes[i] = 1;
    }

    // 0 and 1 are Composites
    primes[0] = 0;
    primes[1] = 1;

    // Cross out Composites from 2 to sqrt(limit)
    i = 2;
    while( i * i <= limit) {
        // Ignore if already flagged C
        if (primes[i] == 0) {
            i++;
            continue;
        }
        j = 2 * i;
        while (j < limit) {
            // Flag all multiples as C
            primes[j] = 0;
            j += i;
        }
        i++;
    }

    // Find largest prime
    for (i = 1; i < limit; i++) {
        if (primes[i] == 1) {
            // Factorial
            if (NUMBER % i == 0) {
                m = i;
            }
        }
    }
    printf("%llu", m);

    return 0;
}