#include<stdio.h>
void main()
{
    int a,b,i,n,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if((a>=30)&&(a<=90))
            sum=sum+a;
    }
    printf("%d",sum);
}
