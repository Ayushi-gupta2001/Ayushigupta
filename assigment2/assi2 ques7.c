#include<stdio.h>
void main()
{
    int a,b,c;
    int p,q,r;
    float x,y;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter value of p,q,r");
    scanf("%d%d%d",&p,&q,&r);
    x=((r*c-q*c)/(q*a-b*p));
    y=((r*a-p*c)/(p*b-q*a));
    printf("x is %f",x);
    printf("y is %f",y);

}
