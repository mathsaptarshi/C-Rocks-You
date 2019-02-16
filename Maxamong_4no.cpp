#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=2,c=3,d=4;
	if(a<b)
	{
	    if(b<c)
	    {
	            if(c<d)	
	            {
		        printf("Max is d = %d",d);
	            }
	            else
	            {
	         	printf("Max is c = %d",c);
               	}
        }
        else if(d<b)
        {
        printf("Max is b = %d",b);
		}
		else
		{
		printf("Max is d = %d",d);	
		}
        
		
			
	    } 
		else if(a>c)
		    {
			printf("Max is a = %d",a);
		    }      	
        else
		{
		printf("Max is c = %d",c);	
		 } 	
		
	getch();
	return 0;
}
