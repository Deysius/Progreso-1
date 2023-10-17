#include<stdio.h>
int main(void){
int tabla5=0;
int numtabla5;
printf ("Indique cuantos numeros de la tabla del 5 decia ver\n");
scanf ("%d",&numtabla5);
printf ("La tabla del 5 es\n");
do
{
    tabla5=tabla5+5;
    printf ("%d\n",tabla5);
    numtabla5--;

} while (numtabla5!=0);
return 0;
}