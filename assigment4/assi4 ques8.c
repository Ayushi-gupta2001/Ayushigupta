#include<stdio.h>
void main()
{
    int x;
    for(x=0;x<100;x++)
        if(((x%3==0)||(x%5==0))&&(x%15!=0))
        printf("\n %d",x);
}
