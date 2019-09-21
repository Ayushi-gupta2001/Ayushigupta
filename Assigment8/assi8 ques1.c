#include<stdio.h>
void main()
{
    int i,n,a,b,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter number %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        sum=sum+b;
    }
    printf("%d",sum);


}

