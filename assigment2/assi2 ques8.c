#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float A;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    A=acos((b*b+c*c-a*a)/2*b*c);
    printf("cos inverse in radians %f",A);
    printf("and in degree %f",A);
}
