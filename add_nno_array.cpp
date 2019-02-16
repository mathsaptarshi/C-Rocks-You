#include<stdio.h>
#include<conio.h>
#define sapta main
int sapta()
{
	int arr[5],i,j,sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    
  for(j=0;j<5;j++)
    {
    sum=sum+arr[j];
   	}
   	printf("%d",sum);
	getch();
	return 0;
}
