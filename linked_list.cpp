#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	
	struct node *head = NULL;
	struct node *create(struct node *);
	void display(struct node *);
	int ch;

	while(1)
	{	
		printf("Press 1-> for create node\nPress 3-> for Displat List");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				head=create(head);
				break;
			case 2:
				append(head);
				break;
			case 3:
				display(head);
				break;
			default :
				printf("-----Wrong Choice-----")
		}
		
	}
}
struct node *creat(struct node *h)
{
	if(h!=NULL)
	{
		printf("List Already Exists");
		return h;
	}
	h=(struct node *(malloc(sizeof(struct node))));
	printf("Enter data for new node :-");
	scanf("%d",h->data)
}
