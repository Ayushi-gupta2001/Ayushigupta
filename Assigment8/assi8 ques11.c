#include<stdio.h>
void main()
{
    int a,b,i,n,c,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        c=a;
         if(b%3==0)
            {
                sum=sum+c;
            }
    }
    printf("sum is %d",sum);
}




