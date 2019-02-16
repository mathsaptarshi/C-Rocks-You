#include<stdio.h>
#include<conio.h>
void arr_fun(int a[3][3])
{
int j,arr1[3][3],b=0;
int i;
for(i=0;i<3;i++)
{
 	for(j=0;j<3;j++)
	{	
		b+=a[i][j];
	}
	printf(" %d \n",b);
	b=0;
}
//printf(" %d ",b);
}
int main()
{
	int a[3][3]={1,2,5,
	             6,5,4,
			     5,5,4
			     };
	arr_fun(a);
	getch();
	return 0;	
}
