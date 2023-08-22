#include<stdio.h>
#include<string.h>

int main()
{
    //Declaracion de variables
    int num =0;
    char caract='A';
    float num2 =3.14;
    double num3 = 2.2;
    char carcatArray[]= {'H','O','L','A'};
    char caractArray2[]= "HOLA";
    //_Bool boleano =1;

    //variables para ejemplos 
    int ej1 =0;
    int ej2 =0;
    int ej3 =0;
    char nombre ='n';

    //Demostramos la varialbe

    printf("Los tantos como enteros sirven de la siguiente forma\n");

    printf("Ejemplo para utilizar enteros o int\n");
    printf("Ingrese dos numeros\n");
    scanf("%d",&ej1);
    scanf("%d",&ej2);

    ej3 = ej1 + ej2;
    printf("la suma de los siguientes numero es :%d",ej3);

    printf("\nIngrese una letra\n");
    scanf("%s",&nombre);
    printf("Letra:%c\n",nombre);


    printf("la demas varaibles pueden ser :\n\n");


    printf("char: %c\n", caract);
    printf("int: %d\n", num);

    /*printf("float: %f\n", floatVar);
    printf("double: %lf\n", doubleVar);

    printf("char array: %s\n", charArray);
    printf("string array: %s\n", stringArray);*/

}