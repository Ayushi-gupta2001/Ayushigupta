#include<stdio.h>
void main()
{
    int a,i,n,sum=0,b=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=b*a;
        sum=sum+b;
        b=a;

    }
    printf("%d",sum);
}
