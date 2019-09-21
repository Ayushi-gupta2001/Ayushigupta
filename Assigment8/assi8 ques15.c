#include<stdio.h>
void main()
{
    int a,b,i,n,c,x=0,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            b=a*i;
            sum=sum+b;
            x=x+i;
            {
              c=sum/x;
            }
        }
    }
    printf("%d",c);
}
