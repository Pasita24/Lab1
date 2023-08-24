#include <stdio.h>

int main() {
    int año;

    printf("Ingrese un año: ");
    scanf("%d", &año);

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        printf("%d es un anio bisiesto.\n", año);
    } else {
        printf("%d no es un anio bisiesto.\n", año);
    }
    return 0;
}
