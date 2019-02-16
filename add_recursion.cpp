#include<stdio.h>
#include<conio.h>
int div(int a,int b)
{
	if(b==0)
	{	
	return 0;
    }
	else if(a-b==0)
	{
		return 1;
	}
	else if(a<b)
	{
		return 0;
	}
	else 
	{
	return (1+add(a-b,b));
	}
	

	
		
}

int main(void)
{

    printf("%d",add(50,5));
	getch();
	return 0;
}
