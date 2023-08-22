#include<stdio.h>
#include<string.h>
int main()
{
    int opcion;
    //SUMA
    int num1,num2,suma=0;
    //Resta
    int num3,num4,resta;
    //multiplicacion
    int num5,num6;
    double multiplicacion;
    //division
    int num7,num8;
    float division;
    //Variables
    printf("Hola bienvenido\n\n");
    printf("Menu\n");
    printf("1.-Sumar\n");
    printf("2.-Restar\n");
    printf("3.-Multiplicar\n");
    printf("4.-Dividir\n");

    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1:
        printf("Ingrese dos numeros para que sean sumados\n");
        scanf("%d",&num1);
        scanf("%d",&num2);

        suma = num1 + num2 ;
        printf("La suma de los numeros es :%d\n",suma);
        break;
    case 2:
        printf("Ingrese dos numeros para que sean Restados\n");
        scanf("%d",&num3);
        scanf("%d",&num4);

        resta = num3 - num4 ;
        printf("La resta de los numeros es :%d\n",resta);
    break;
    case 3:
        printf("Ingrese dos numeros para que sean Multiplicados\n");
        scanf("%d",&num5);
        scanf("%d",&num6);

        multiplicacion = num5 * num6 ;
        printf("La multiplicacion de los numeros es :%.21f\n",multiplicacion);
    break;
    case 4:
        printf("Ingrese dos numeros para que sean divididos\n");
        scanf("%d", &num7);
        scanf("%d", &num8);

        if (num8 != 0) {
            division = (double)num7 / num8;
            printf("La division de los numeros es: %.21f\n", division);
        } else {
            printf("No se puede dividir por cero.\n");
        }
    break;
    default:
        printf("El numero ingresado no es correcto\n");
        break;
    }
    return 0;
}