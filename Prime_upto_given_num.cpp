#include<stdio.h>
#include<conio.h>

int main()
 {
 	int input,i,j,count,count_prime=0;
	printf("enter number\n");
	scanf("%d",&input);
	for(i=2;i<=input;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			 count++;
			}
			
		}
			//printf("For = %d  count = %d\n",i,count);
			if(count == 2)
			{
				count_prime++;
			printf("%d Number is Prime\n",i);
			}
			else{
			  //printf("%d Number is not Prime\n",i);
			}
		
	}
	printf("total prime number of prime is %d",count_prime);
	
	getch();
	return 0;
 }
