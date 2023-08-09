// main() runs in its own thread in the OS
#include "mbed.h"

int fibonacci(int n) {
    if (n == 0) return 0; // Base case: the 0th term is 0
    if (n == 1) return 1; // Base case: the 1st term is 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: the nth term is the sum of the (n-1)th and (n-2)th terms
}

// main() runs in its own thread in the OS
int main() {
    printf("Fibonacci sequence up to term 10:\n");

    for (int i = 0; i < 10; ++i) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    while (true);
}
