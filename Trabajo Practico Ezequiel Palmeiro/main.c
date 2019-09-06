#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"
int main()
{
    int numero1=0;
    int numero2=0;
    int resultadoS;
    int resultadoR;
    int resultadoM;
    float resultadoDiv;
    int resultadofac1;
    int resultadofac2;
    int flagA=0;
    int flagB=0;
    int flagC=0;
    int opciones;
    char seguir='s';

do{ printf("--------------------------------------------\n");
    printf("|                 CALCULADORA              |\n");
    printf("--------------------------------------------");
    printf("\n1)Ingrese el primero numero: (A=%d)",numero1);
    printf("\n2)Ingrese el segundo numero: (B=%d)",numero2);
    printf("\n3)Calcular:");
    printf("\n4)Mostrar:");
    printf("\n5)Desea salir?");
    printf("\nOpcion elegida: ");
    fflush(stdin);
    scanf("%d",&opciones);


    switch(opciones){
    case 1:
        printf("\n1)Ingrese el primero numero: ");
    fflush(stdin);
    scanf("%d",&numero1);
    flagA=1;
    break;
    case 2:
        printf("\n2)Ingrese el segundo numero: ");
        fflush(stdin);
    scanf("%d",&numero2);
    flagB=1;
    break;
    case 3:
        if(flagA==0 && flagB==0){

        printf("No ingresaste los operadores\n");
        system("pause");
        }
        else{
            resultadoS=sumar(numero1,numero2);
        resultadoR=restar(numero1,numero2);
        resultadoM=multiplicar(numero1,numero2);
        resultadoDiv=dividir(numero1,numero2);
        resultadofac1=factorial(numero1);
        resultadofac2=factorial(numero2);
        flagC=1;
        }
    break;
    case 4:
        if(flagC==0){
            printf("No calculaste los resultados\n");
            system("pause");
        }
        else{
    printf("El resultado de la suma de A %d y B %d es: %d\n",numero1,numero2,resultadoS);
    printf("El resultado de la resta de A %d y B %d es: %d\n",numero1,numero2,resultadoR);
    printf("El resultado de la multiplicacion de A %d y B %d es: %d\n",numero1,numero2,resultadoM);
    printf("El resultado de la division de A %d y B %d es: %.2f\n",numero1,numero2,resultadoDiv);
    printf("El factorial del numero A %d es: %d \nEl factorial del numero B %d es: %d\n",numero1,resultadofac1,numero2,resultadofac2);
    system("pause");
        }
    break;
    case 5:
    seguir='n';
    break;
    default:
        printf("Ingrese una opcion correcta.\n");
        system("pause");
    }
    system("cls");
}while(seguir=='s');
printf("***********************************\n");
printf("**Gracias por usar mi Calculadora**\n");
printf("***********************************\n");
    return 0;
}





