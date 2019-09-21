#include<stdio.h>
void main()
{
    int x;
    for(x=20;x<80;x++)
        if(((x>20)&&(x<40))||((x>50)&&(x<80)&&(x%2==0)))
        printf("%d",x);
}
