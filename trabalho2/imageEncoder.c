#include <stdio.h>
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
