#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    //Arreglo de numeros randoms
    int Aleat[5];
    //Generamos los 5 aleatorios
    for(int i =0;i<5;i++)
    {
        Aleat[i] = rand()%50+1;
    }
    //Mostramos los numeros
    printf("Numeros generados:\n");
    for(int i=0;i<5;i++)
    {

    }
    return 0; 
}
