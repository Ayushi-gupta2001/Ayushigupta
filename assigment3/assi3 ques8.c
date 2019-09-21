#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
        printf("c is different %d",c);
    else
    {
        if(b==c)
            printf("a is different %d",a);
        else
        {
            if (a==c)
                printf("b is different %d",b);
        }
    }



}
