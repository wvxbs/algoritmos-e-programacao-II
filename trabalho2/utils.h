#ifndef UTILS_H
#define UTILS_H

#include <stdbool.h>
#include "imageEncoder.h"

void showHelp();
void readManualInput(int *width, int *height, int image[MAX_HEIGHT][MAX_WIDTH]);
bool readPBMFile(const char *filename, int *width, int *height, int image[MAX_HEIGHT][MAX_WIDTH]);

#endif
