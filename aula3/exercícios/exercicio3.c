#include <stdio.h>

float converterCparaF(float celsius) {
    return (celsius * 1.8) + 32;
}

void main() {
    float celsius = 0.0;

    printf("Insira a temperatura em gráus celsius: ");
    scanf("%f", &celsius);

    printf("%2.f gráus celsius é igual a %2.f farenheit", celsius, converterCparaF(celsius));
}