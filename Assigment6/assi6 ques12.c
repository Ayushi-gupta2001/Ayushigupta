#include<stdio.h>
int main()
{
int a,b;
for(b=1;b<=6;b++)
{
for(a=1;a<=b;a++)
printf("%c",64+a);
for(a=1;a<=7-b;a++)
printf("%c",96+a);
printf("\n");

}

}