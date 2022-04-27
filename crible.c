#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define N 10000000

bool numbers[N];
int primes[1800000];

int main()
{
    int i, j, k;

    memset(numbers, 1, N);

    for (i = 2; i * i <= N; ++i) {
        if (!numbers[i-1])
            continue;
        j = 2 * i;
        while (j <= N) {
            numbers[j-1] = false;
            j += i;
        }
    }

    k = 0;
    for (i = 2; i <= N; ++i) {
        if (numbers[i-1]) {
            primes[k] = i;
            ++k;
        }
    }

    for (i = 0; i < k; ++i) {
        printf("%d\n", primes[i]);
    }
    printf("Number of primes: %d\n", k);

    return 0;
}
