#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float distance;
    printf("enter value of a,b");
    scanf("%d%d",&a,&b);
    printf("enter value of c,d");
    scanf("%d%d",&d,&c);
    distance=sqrt(pow((a-c),2)+pow((b-d),2));
    printf("distance is %f",distance);
}
