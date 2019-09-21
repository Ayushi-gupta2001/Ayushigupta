#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,p,f;
    printf("enter value of a,b,c,p");
    scanf("%d%d%d%d",&a,&b,&c,&p);
    p=(a*(pow((p),2)))+(b*(pow((b),2)))+c;
    printf("f(p) is %d",p);
}
