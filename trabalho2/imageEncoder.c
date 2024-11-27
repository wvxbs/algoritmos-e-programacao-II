#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "imageEncoder.h"

void encodeImage(int width, int height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    printf("Dimensão: %ix%i\nCodificação:\n", width, height);
    for (int i = 0; i < height; i++) {
        int count = 1;
        for (int j = 1; j < width; j++) {
            if (image[i][j] == image[i][j - 1]) {
                count++;
            } else {
                printf("%i %i ", image[i][j - 1], count);
                count = 1;
            }
        }
        printf("%i %i\n", image[i][width - 1], count);
    }
}

int isUniform(int startX, int startY, int width, int height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    int firstPixel = image[startY][startX];
    for (int i = startY; i < startY + height; i++) {
        for (int j = startX; j < startX + width; j++) {
            if (image[i][j] != firstPixel) {
                return 0;
            }
        }
    }
    return 1;
}

char* binaryImageEncoder(int startX, int startY, int width, int height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    if (isUniform(startX, startY, width, height, image)) {
        char* code = (char*)malloc(2 * sizeof(char));
        code[0] = (image[startY][startX] == 1) ? 'P' : 'B';
        code[1] = '\0';
        return code;
    }

    int midWidth = width / 2;
    int midHeight = height / 2;

    int width1 = midWidth + (width % 2);
    int width2 = midWidth;
    int height1 = midHeight + (height % 2);
    int height2 = midHeight;

    char* code1 = binaryImageEncoder(startX, startY, width1, height1, image);                          // 1º quadrante
    char* code2 = binaryImageEncoder(startX + width1, startY, width2, height1, image);                 // 2º quadrante
    char* code3 = binaryImageEncoder(startX, startY + height1, width1, height2, image);                // 3º quadrante
    char* code4 = binaryImageEncoder(startX + width1, startY + height1, width2, height2, image);       // 4º quadrante

    char* result = (char*)malloc(strlen(code1) + strlen(code2) + strlen(code3) + strlen(code4) + 2);
    strcpy(result, "X");
    strcat(result, code1);
    strcat(result, code2);
    strcat(result, code3);
    strcat(result, code4);

    free(code1);
    free(code2);
    free(code3);
    free(code4);

    return result;
}
