#include<stdio.h>
void main()
{
    int x;
    for(x=10;x<99;x++)
        if((x>10)&&(x<99)&&((x/10)%2==1))
        printf("%d",x);
}
