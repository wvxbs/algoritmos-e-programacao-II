#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void showHelp() {
    printf("Uso: ImageEncoder [-? | -m | -f ARQ]\n");
    printf("Codifica imagens binárias dadas em arquivos PBM ou por dados informados manualmente.\n");
    printf("Argumentos:\n");
    printf("  -?, --help   : apresenta esta orientação na tela.\n");
    printf("  -m, --manual : ativa o modo de entrada manual.\n");
    printf("  -f ARQ       : ativa o modo de entrada por arquivo e processa o arquivo ARQ.\n");
}

void readManualInput(int *width, int *height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    printf("Informe a largura (máximo %i): ", MAX_WIDTH);
    scanf("%i", width);
    printf("Informe a altura (máximo %i): ", MAX_HEIGHT);
    scanf("%i", height);
    printf("Informe os valores da matriz binária (0 ou 1):\n");
    for (int i = 0; i < *height; i++) {
        for (int j = 0; j < *width; j++) {
            scanf("%i", &image[i][j]);
        }
    }
}

bool readPBMFile(const char *filename, int *width, int *height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    FILE *file = fopen(filename, "r");
    if (!file) return false;
    char format[3];
    fscanf(file, "%2s", format);
    if (strcmp(format, "P1") != 0) {
        fclose(file);
        return false;
    }
    fscanf(file, "%i %i", width, height);
    for (int i = 0; i < *height; i++) {
        for (int j = 0; j < *width; j++) {
            fscanf(file, "%i", &image[i][j]);
        }
    }
    fclose(file);
    return true;
}
