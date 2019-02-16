#include<stdio.h>
#include<conio.h>   

int alternating(int arr[])
{
	
int i=0;
if(arr[0]==NULL)
return true;
for(i=0;i<10;i=i+3)
{

	if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2])
{
	printf("true");
	break;

}
else if(arr[i]>arr[i+1] && arr[i+1]<arr[i+2])
{
	printf("true");
		break;
}
else printf("false");
break;
}
	
}
int main()
{
	int arr[20]={3,2,4,3,5,1,4,19};
	alternating(arr);
	getch();
	return 0;
}

