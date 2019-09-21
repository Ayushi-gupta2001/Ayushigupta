#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("enter the value of length of tringle");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter value of s");
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is %f",area);
}


