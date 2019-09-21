#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter value of a");
    scanf("%d",&a);
    b=a%100;
    e=a%10;
    c=(a%100)/10;
    d=((a-b)+(e*10+c));
    printf("%d",d);
}
