#include<stdio.h>
void main()
{
    int i,m;
    for(i=5;i<100;i++)
    {
        m=i%10;
        if((m>=5)&&(m<=8))
            printf("%d",i);
    }


}
