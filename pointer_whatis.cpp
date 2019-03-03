#include <stdio.h>
int main(){
	int iVar=10;
	int *pPtr=NULL;
	pPtr=&iVar;
	printf("The memory address of iVar using &operatoer: %p\n",&iVar);
	printf("Memory Address of iVar using piinter variable pPtr: %p\n",pPtr);
	printf("Value of iVar using pointer variable *pPtr: %d\n",*pPtr);
	return 0;
}
