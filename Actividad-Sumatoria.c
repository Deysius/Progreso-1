#include <stdio.h>
int main(void){
int numero;
int suma;
printf ("Ingrese un numero entero positivo\n");
scanf ("%d",&numero);
if (numero<=0){
while (numero<=0)
{
    printf ("El numero ingresado no es un entero positivo, intente otra vez\n");
    scanf ("%d",&numero);
}
}
return 0;
}