#include<stdio.h>
int main()
{
	int ivar=0;
	double dvar=10.21;
	printf("\nint:%ld",sizeof(int));
	printf("\nfloat:%ld",sizeof(float));
	printf("\ndouble:%ld",sizeof(double));
	printf("\nchar:%ld",sizeof(char));
	printf("\nlong:%ld",sizeof(long));
	printf("\nInt+Double%ld",sizeof(ivar+dvar));
	return 0;
}
