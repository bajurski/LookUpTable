#include <math.h>
#include"headers/fileOps.h"
FILE* file;
int main() {
    double x;
    double angleTable[360];
    file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    for (int i = 0; i < 360; ++i) {
        double angle = i*M_PI/180;
        x = sin(angle);
        fwrite(&x, sizeof(double), 1, file);
    }
    fclose(file);

    file = fopen("numbers.bin", "rb");
     if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    for (int i = 0; i < 360; ++i) {
        fread(&angleTable[i], sizeof(double), 1,file);
    }
    fclose(file);

    for (int i = 0; i < 360; ++i) {
        printf("%d - %f\n", i, angleTable[i]);
    }
    return 0;
}
