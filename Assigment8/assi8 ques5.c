#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,c,n,e,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%100;
        c=b/10;
        e=(((a-b)/10)+c);
        sum=sum+e;
    }
    printf("%d",e);
}
