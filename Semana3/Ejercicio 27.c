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
}