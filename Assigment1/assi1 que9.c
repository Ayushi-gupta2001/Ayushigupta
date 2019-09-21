#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter value of a");
    scanf("%d",&a);
    b=a%100;
    d=b%10;
    c=(a-b)/10;
    e=c+d;
    printf("%d",e);
}
