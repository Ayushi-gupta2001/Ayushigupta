#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    int det;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    det=sqrt(b*b-4*a*c);
    if(det>0)
        printf("both roots are real and distinct %d",det);
    else
    {
        if(det=0)
            printf("both roots are equal %d",det);
        else
        {
            if(det<0)
                printf("both roots are imaginary %d",det);
        }
    }

}
