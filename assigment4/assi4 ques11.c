#include<stdio.h>
void main()
{
    int i,m,n,a;
    for(i=0;i<=100;i++)
    {
        m=i%100;
        n=m%10;
        a=m/10;
        if((n+a)%7==0)
            printf("%d\n",i);

    }

}
