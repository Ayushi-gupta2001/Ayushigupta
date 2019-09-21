#include<stdio.h>
void main()
{
     int i,m;
     for(i=10;i<100;i++)
     {
         m=i/10;
         if(m%3==1)
            printf("%d\n",i);
     }
}
