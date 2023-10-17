#include<stdio.h>
int main(void){
int i;
printf ("Todos los numero que terminen en 6, comprendidos desde 25 hasta 205\n");
for (i=26;i<=205;i=i+10)
{
    printf("%d\n",i);
}

return 0;
}