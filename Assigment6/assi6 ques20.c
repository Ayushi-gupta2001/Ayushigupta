#include<stdio.h>
void main()
{
int a,b;
for(b=1;b<=6;b++)
{
for(a=65;a<=64+b;a++)
printf("%c",a+b-1);

printf("\n");

}

}