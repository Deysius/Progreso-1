#include<stdio.h>
int main(void){
int num1;
int num2;
int digitosnum1=0;
int digitosnum2=0;
printf ("Ingrese el primer numero a comparar\n");
scanf ("%d",&num1);
printf ("Ingrese el segundo numero a comparar\n");
scanf ("%d",&num2);
int resultnum1=num1;
int resultnum2=num2;
while (resultnum1!=0)
{
    digitosnum1++;
    resultnum1/=10;
}
while (resultnum2!=0)
{
    digitosnum2++;
    resultnum2/=10;
}
if (digitosnum1>digitosnum2)
{
    printf ("El numero %d tiene mas digitos que %d\n",num1,num2);
}
if (digitosnum2>digitosnum1)
{
    printf ("El numero %d tiene mas digitos que %d\n",num2,num1);
}
return 0;
}