#include<stdio.h>
void main()
{
    int a,b,c,i,n,d,e,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%100;
        d=b/10;
        e=b%10;
        c=((a-b)+(e*10+d));
        sum=sum+c;
    }
    printf("%d",sum);
}
