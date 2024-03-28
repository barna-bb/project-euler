// Problem 7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // --- Sieve of Eratosthenes ---

    // Rosser 1941 - Upper limit of nth prime
    // pn < nlog + nloglogn for n >= 6
    const int n = 10001;
    const unsigned long long limit = n * (log(n) + log(log(n)));

    unsigned long long p = 0;
    unsigned long long i = 0;
    unsigned long long j = 0;
    int m = 0;

    // Prime List
    int *primes;
    primes = malloc(sizeof(int) * limit);

    // Flag all as Prime
    for (i = 0; i < limit; i++) {
        primes[i] = 1;
    }

    // 0 and 1 are Composites
    primes[0] = 0;
    primes[1] = 0;

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
    
    // Find nth prime
    for (i = 0; i < limit; i++) {
        if (primes[i] == 1) {
            m++;
        }
        if (m == n) {
            p = i;
            break;
        }
    }
    printf("%llu", p);
   
    return 0;
}