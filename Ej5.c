#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar_ascendente(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int comparar_descendente(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    srand(time(NULL));

    int Aleat[5];
    int i;
    //Generamos 5 randoms 
    printf("---------Bienvenido----------\n");
    for (i = 0; i < 5; i++) {
        Aleat[i] = rand() % 100; 
    }
    printf("Los numeros generados son:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", Aleat[i]);
    }
    printf("\n");
    printf("\n");

    //Metodo Ascendente
    qsort(Aleat, 5, sizeof(int), comparar_ascendente);

    printf("Numeros ascendente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", Aleat[i]);
    }
    printf("\n");
    printf("\n");
    //Metodo descendente 
    qsort(Aleat, 5, sizeof(int), comparar_descendente);

    printf("Numeros descendente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", Aleat[i]);
    }
    printf("\n");

    return 0;
}

