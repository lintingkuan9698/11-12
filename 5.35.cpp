#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int c = 0;
    
    for (unsigned int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(void) {
    unsigned int n;
    printf("Enter n for Fibonacci: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    
    // (b) 尋找系統中 unsigned long long int 能印出的最大 Fibonacci 數
    unsigned long long int f1 = 0, f2 = 1, next = 0;
    unsigned int i = 0;
    while (1) {
        if (i == 0) { next = 0; }
        else if (i == 1) { next = 1; }
        else {
            if (f2 > 18446744073709551615ULL - f1) {
                printf("Largest Fibonacci index before overflow: %u\n", i - 1);
                printf("Largest Fibonacci value: %llu\n", f2);
                break;
            }
            next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
        i++;
    }
    
    return 0;
}
