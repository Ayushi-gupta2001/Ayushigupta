#include<stdio.h>
void main()
{
    int x;
    for(x=0;x<100;x++)
        if(((x<50)&&(x%2==0))||((x>50)&&(x%2!=0)))
        printf("%d",x);
}
