#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    float area;
    printf("enter value of a,b");
    scanf("%d%d",&a,&b);
    printf("enter value of c,d");
    scanf("%d%d",&c,&d);
    printf("enter value of e,f");
    scanf("%d%d",&e,&f);
    area=((a*(d-f))+(c*(f-b))+(e*(b-d)))/2;
    printf("area is %f",area);
}
