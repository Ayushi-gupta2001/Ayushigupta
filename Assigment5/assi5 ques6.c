#include<stdio.h> 

void main()

{
	int x,y;
	
        for(y=1;y<=4;y++)
	
{
	     
        for(x=1;x<=20;x++)
	    
        if(((y%2==1)&&(x%5==1))||((y%2==0)&&(x%5!=1)))
	    
        {printf("0");}	     
	
	     
    else
	    
       {printf("*");}
	
	  
       printf("\n");
	
	
	
	
}








}
