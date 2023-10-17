#include<stdio.h>
int main(void){
int numero1;
int numero2;
printf ("Ingrese su primer numero:\n");
scanf ("%d",&numero1);
printf ("Ingrese su segundo numero:\n");
scanf ("%d",&numero2);
if (numero1<numero2)
{
    printf ("Todos los numeros entre %d y %d son:\n",numero1,numero2);
    for (int i=numero1; i<=numero2; i++)
    {
        if (i%5==0)
        {
            printf ("%d\n",i);
        }
        
    }
      
}
if (numero2<numero1)
{
    printf ("Todos los numeros entre %d y %d son:\n",numero2,numero1);
    for (int i=numero2; i<=numero1; i++)
    { 
        if (i%5==0)
        {
            printf ("%d\n",i);
        }
    }
    
}
return 0;
}