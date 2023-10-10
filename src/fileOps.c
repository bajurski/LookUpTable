#include"../headers/fileOps.h"

FILE* file;
double x;
double angleTable[360];

int fileOpenForWrite(char* fileName)
{
    file = fopen(fileName, "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    for (int i = 0; i < 360; ++i) {
        double angle = i*PI/180;
        x = sin(angle);
        fwrite(&x, sizeof(double), 1, file);
    }
    fclose(file);

}

int fileOpenForeRead(char* fileName)
{
    file = fopen(fileName, "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    for (int i = 0; i < 360; ++i) {
        fread(&angleTable[i], sizeof(double), 1,file);
    }
    fclose(file);
}