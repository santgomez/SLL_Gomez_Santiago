#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("holamundo.txt", "w");
    fputs("Hola mundo", archivo);
    fclose(archivo);
    return 0;
}
