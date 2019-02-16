#include<stdio.h>
#include<conio.h>
#define MAX 10
struct stack
{
	int data[MAX];
	int top;
};

int main()
{	

	struct stack S;
	S.top=-1;
	int ch;
	struct stack push(struct stack);
	//struct stack pop(struct stack);
	void peek(struct stack);

	
		while(1)
		{
			printf("Enter 1 to PUSH\n");
			printf("Enter 2 to POP\n");
			printf("Enter 3 to PEEK/Display all\n");
			printf("Enter 4 to EXIT\n");
			scanf("%d\n",&ch);
			
				switch(ch)
				{
					case 1: 
						S=push(S);
						break;
					/*case 2:
							S=pop(S);
							break;*/
					case 3:
						peek(S);
						break;
					/*case 4: 
							exit(0);
							break;*/
					default: 
							printf("-------Wrong choice, please choose the correct option--------\n");						
				}
		}

	
	getch();
	return 0;
}


struct stack push(struct stack S)
{
		if(S.top == MAX-1)
		{
			printf("STACK is full\n");
			return S;
		}
		
			fflush(stdin);
			printf("-----------::---------- \n");
			printf("-----------: Enter the new data to PUSH :---------- \n");
			S.top+=1;
			scanf("%d",&S.data[S.top]);
			printf("-----------::---------- \n");
			return S;
		
}
	
	
void peek(struct stack S)
{		
		int i;
		if(S.top==-1)
		{
			printf("-------STACK is empty--------\n");
			return;
		}
		for(i=S.top;i>=0;i--)
		{
			printf("%d\t\t",S.data[i]);
		}
}
