#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,x1,x2,D;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    x1=-b+(sqrt(b*b-4*a*c))/2*a;
    x2=-b-(sqrt(b*b-4*a*c))/2*a;
    D=b*b-4*a*c;
    if(D<0)
    {
        printf("x1 are %d");
        printf("x2 are %d");
    }
    else
    printf("roots are real and equal");
}


