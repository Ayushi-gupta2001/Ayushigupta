#include<stdio.h>
void main()
{
    int a,b,i,n,j=0,sum=0;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter numbers %d",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2!=0)
        {
            j=j+1;
        }
    }
    printf("%d",j);
}

















