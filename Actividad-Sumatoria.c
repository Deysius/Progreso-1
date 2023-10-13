#include <stdio.h>
int main(void){
int numero;
int suma;
int menu;
while (menu!=2)
{
    printf ("(1)Suma de gauss\n");
    printf ("(2)Salir\n");
    scanf ("%d",&menu);
    switch (menu)
    {
    case 1: 
    printf ("Ingrese un numero entero positivo\n");
    scanf ("%d",&numero);
    if (numero<=0){
    while (numero<=0){
    printf ("El numero ingresado no es un entero positivo, intente otra vez\n");
    scanf ("%d",&numero);
    }
    }
    suma=(numero*(numero+1))/2;
    printf ("La suma de los primeros %d numeros es: %d\n",numero,suma);
    return 0;
    break;
    case 2:
    break;
    default: printf ("Opcion no valida\n");
    break;
    }
}
}   