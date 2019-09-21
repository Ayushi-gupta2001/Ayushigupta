#include<stdio.h>
void main()
{
    int x;
    for(x=0;x<99;x++)
    {
        if(((x>0)&&(x<9))||((x>20)&&(x<29))||((x>40)&&(x<49))||((x>60)&&(x<69))||((x>80)&&(x<89)))
        {
            if(x%2!=0)
             printf("odd number is %d",x);
        }

        if(((x>10)&&(x<19))||((x>30)&&(x<39))||((x>50)&&(x<59))||((x>70)&&(x<79))||((x>90)&&(x<99))&&(x%2==0))
        {
            if(x%2==0)
          printf("even number is /n%d",x);
        }
    }

}

















