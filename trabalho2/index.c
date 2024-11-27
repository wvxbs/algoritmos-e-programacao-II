#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "imageEncoder.h"
#include "validator.h"
#include "utils.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Modo de uso: ./binaryImageEncoder [-? | -m | -f ARQUIVO]\n");
        return 1;
    }

    if (strcmp(argv[1], "-?") == 0 || strcmp(argv[1], "--help") == 0) {
        showHelp();
        return 0;
    } else if (strcmp(argv[1], "-m") == 0) {
        int width, height;
        int image[MAX_HEIGHT][MAX_WIDTH];
        printf("Modo manual:\n");
        readManualInput(&width, &height, image);
        char* encodedImage = binaryImageEncoder(0, 0, width, height, image);
        printf("Codificação: %s\n", encodedImage);
        free(encodedImage);
    } else if (strcmp(argv[1], "-f") == 0) {
        if (argc < 3) {
            printf("Erro: Especifique o nome do arquivo após a flag -f.\n");
            return 1;
        }
        int width, height;
        int image[MAX_HEIGHT][MAX_WIDTH];
        if (readPBMFile(argv[2], &width, &height, image)) {
            char* encodedImage = binaryImageEncoder(0, 0, width, height, image);
            printf("Codificação: %s\n", encodedImage);
            free(encodedImage);
        } else {
            printf("Erro ao ler o arquivo %s. Verifique se o arquivo está no formato PBM.\n", argv[2]);
            return 1;
        }
    } else {
        printf("Flag desconhecida. Use -? ou --help para ajuda, -m para entrada manual ou -f ARQUIVO para ler de um arquivo.\n");
        return 1;
    }

    return 0;
}
