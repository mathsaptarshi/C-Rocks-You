#include<stdio.h>
int main()
{
	int i,j,k;
	char ch = 'A';
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%c",ch + k-1);
	     
		}
		
		printf("\n"); 
				
	}
	return 0;
}
