#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if
        (a>b&a>c)
        printf("a is largest");
    else
    {
        if
            (b>c&b>a)
            printf("b is largest");
     else
     {
         if
            (c>a&c>b)
            printf("c is largest");
     }

    }
}
