#include <stdio.h>
#include <math.h>

int calcularPotencia(int x, int n){
    return pow(x, n);
}

void main() {
    int x, n, resultado = 0;

    printf("Insira o numero e a potencia: ");
    scanf("%i%i", &x, &n);

    if (n >= 0) {
        resultado = calcularPotencia(x, n);
        printf("%i elevado a %i eh igual a %i", x, n, resultado);
    }
    else {
        printf("Potencia menor que 0");
    }
}
