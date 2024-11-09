#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {
    int fib;

    printf("Digite um número: ");
    scanf("%i", &fib);
    printf("A sequencia de Fibonacci na posição %i é igual a %i\n", fib, fibonacci(fib));
}