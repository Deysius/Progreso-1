#include<stdio.h>
int main(void){
int num;
int fact=1;
printf ("Ingrese un numero para encontrar su factorial\n");
scanf ("%d",&num);
for (int i=1; i<=num; i++)
{
    fact*=i;
}
printf ("El numero factorial de %d es %d \n",num,fact);
return 0;
}