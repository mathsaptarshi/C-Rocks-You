#include<stdio.h>
int main(int argc,char* argv[])
{
	int index;
	if(argc)
	{
		for(index=0;index< argc;index++)
		{
			printf("Argument : %s\n",argv[index]);
		}
	}
		else
		{
			printf("No arguument\n");
		}
		
return 0;	
}
