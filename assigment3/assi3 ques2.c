#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter value of a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if
        (a>b&a>c&a>d)
        printf("a is largest");
    else
    {
        if
            (b>a&b>c&b>d)
            printf("b is largest");
        else
        {
            if
                (c>a&c>b&c>d)
                printf("c is largest");
            else
                ("d is largest");
    }
    }
}

