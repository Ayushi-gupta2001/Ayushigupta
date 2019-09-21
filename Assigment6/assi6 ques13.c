#include<stdio.h>
int main()
{
int x,y;
for(y=1;y<=5;y++)
{
for(x=1;x<=y;x++)
printf("%z",96+x);
for(x=1;x<=6-y;x++)
printf("%z",64+y+x);
printf("\n");

}

}