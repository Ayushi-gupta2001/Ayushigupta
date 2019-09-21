#include<stdio.h>
void main()
{
    int i,n,a,b,c,d,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=(a%100)/10;
        c=(a%100)%10;
        d=b*c;
        sum=sum+d;
    }
    printf("%d",sum);
}
