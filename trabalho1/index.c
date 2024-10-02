#include <stdio.h>

int calcularValor(int polinomio[], int grau, int x) {
    int resultado = 0;

    for (int i = grau; i >= 0; i--) {
        int termo = polinomio[i];
        int potencia = 1;
        for (int j = 0; j < i; j++) {
            potencia *= x;
        }

        resultado += termo * potencia;
    }

    return resultado;
}

void somarPolinomios(int polinomio1[], int grauPolinomio1, int polinomio2[], int grauPolinomio2, int r[]) {
    int grauR = (grauPolinomio1 > grauPolinomio2) ? grauPolinomio1 : grauPolinomio2;
    
    for (int i = 0; i <= grauR; i++) {
        r[i] = 0;
        if (i <= grauPolinomio1) r[i] += polinomio1[i];
        if (i <= grauPolinomio2) r[i] += polinomio2[i];
    }

}

void multiplicarPolinomios(int polinomio1[], int grauPolinomio1, int polinomio2[], int grauPolinomio2, int r[]) {
    for (int i = 0; i <= grauPolinomio1 + grauPolinomio2; i++) {
        r[i] = 0;
    }
    
    for (int i = 0; i <= grauPolinomio1; i++) {
        for (int j = 0; j <= grauPolinomio2; j++) {
            r[i + j] += polinomio1[i] * polinomio2[j];
        }
    }

}

void lerPolinomio(int polinomio[], int *grau) {
    printf("Digite o grau do polinomio: ");
    scanf("%i", grau);
    printf("Digite os coeficientes do polinomio:\n");

    for (int i = *grau; i >= 0; i--) {
        printf("Coeficiente de x^%i: ", i);
        scanf("%i", &polinomio[i]);
    }

}

void mostrarPolinomio(int polinomio[], int grau) {
    for (int i = grau; i >= 0; i--) {
        if (i < grau && polinomio[i] >= 0) {
            printf("+");
        }
        
        if (i == 0) {
            printf("P(x) = %i", polinomio[i]);
        } else {
            printf("P(x) = %ix^%i ", polinomio[i], i);
        }
    }

    printf("\n");
}

void main() {
    int run = 1;
    int x, opcao, grauPolinomio1 = 0, grauPolinomio2 = 0;
    int polinomio1[100] = {0};
    int polinomio2[100] = {0};
    int r[200] = {0};

    while (run == 1) {
        printf("Escolha uma opcao:\n");
        printf("1 - Calcular valor de polinomio\n");
        printf("2 - Somar polinomios\n");
        printf("3 - Multiplicar polinomios\n");
        printf("4 - Sair\n");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
                lerPolinomio(polinomio1, &grauPolinomio1);
                printf("Digite o valor de x: ");
                scanf("%i", &x);
                printf("Resultado: %i\n", calcularValor(polinomio1, grauPolinomio1, x));
                mostrarPolinomio(polinomio1, grauPolinomio1);
                run = 1;
                break;

            case 2:
                printf("Lendo polinomio 1:\n");
                lerPolinomio(polinomio1, &grauPolinomio1);
                printf("Lendo polinomio 2:\n");
                lerPolinomio(polinomio2, &grauPolinomio2);
                somarPolinomios(polinomio1, grauPolinomio1, polinomio2, grauPolinomio2, r);
                mostrarPolinomio(r, (grauPolinomio1 > grauPolinomio2) ? grauPolinomio1 : grauPolinomio2);
                run = 1;
                break;

            case 3:
                printf("Lendo polinomio 1:\n");
                lerPolinomio(polinomio1, &grauPolinomio1);
                printf("Lendo polinomio 2:\n");
                lerPolinomio(polinomio2, &grauPolinomio2);
                multiplicarPolinomios(polinomio1, grauPolinomio1, polinomio2, grauPolinomio2, r);
                mostrarPolinomio(r, grauPolinomio1 + grauPolinomio2);
                run = 1;
                break;

            case 4:
                run = 0;
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }

}