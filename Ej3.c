#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    int edad;

    printf("Ingrese un nombre: ");
    scanf("%s", nombre);

    printf("Ingrese una edad: ");
    scanf("%d", &edad);
    printf("Hola %s, usted tiene %d anios de edad.\n", nombre, edad);

    return 0;
}