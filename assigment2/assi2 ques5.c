#include<stdio.h>
#include<math.h>
void main()
{
    int c,d,e,distance;
    char x,y;
    float a,b;
    printf("enter cofficient of x,y");
    scanf("%d%d%d",&c,&d,&e);
    printf("enter value of a,b");
    distance=((a*c+b*d+e)/(pow(c*c+d*d),1/2));
    printf("distance is %d",distance);
}
