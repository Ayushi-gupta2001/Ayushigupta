#include<stdio.h>
void main()
{
    int i,n,a,b,c,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter number %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        c=a/10;
        sum=sum+c;
    }
    printf("%d",sum);
}
