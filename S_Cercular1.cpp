#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node{
 int data;
 struct node *next;
};


struct node *create(struct node *t)
{
		if(t!=NULL)
		{
			printf("List already exist");
			return t;
		}
		t= (struct node*) malloc(sizeof(struct node));
		printf("Enter data for the new node\n");
		scanf("%d",&t->data);
		t->next=t;
		return t;
}



void append(struct node *t)
{
	struct node *p;
	if(t==NULL)
	{
		printf("List does not exists\n");
		return ;
	}
	p = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data for the new node to append\n");
	scanf("%d",&p->data);
	p->next = NULL;
	while(t->next!=NULL)
	{
		t=t->next;
	
	}
		t->next = p;

}


void display(struct node *h)
{
		if(t==NULL)
		{
		printf("List does not exists\n");
		return;
		}
		printf("====================Linked List===================\n");
		while(t!=NULL)
		{
			
			printf("\t\t\t%d\t\n",t->data);
			t=t->next;		
		}
}

struct node *deleteany(struct node *t)
{
	printf("Enter the value of node which you want to delete");
	scanf("")
	
}


struct node *insert_before(struct node *t)
{
	
}






int main()
{
 	struct node *head = NULL;
 	int ch;
 	struct node *create(struct node*);
 
 	while(1)
 	{
 		 printf("Press 1 for create \n");
 		 printf("Press 2 for append \n");
 		 printf("Press 3 for display \n");
 		 printf("Press 4 for deleteany \n");
 		 printf("Press 5 for insert before \n");
 		 printf("Press 6 for insert after \n");
 		 printf("Press 7 for search \n");
		 printf("Press 8 for count \n");
		 printf("Press 9 for exit \n");
 		 printf("Enter ur choice \n");
 		 scanf("%d",&ch);
  
  switch(ch)
  {
   case 1: head = create(head);
    break;
   case 2: append(head);
    break;
   case 3: display(head);
    break;
   /*case 4: head = deleteany(head);
    break;
   case 5: head = insert_before(head);
    break;
   case 6: head = insert_after(head);
    break;
   case 7: search(head);
    break;
   case 8: count(head);
    break;
   case 9: exit();
    break;*/
   default :
    printf("Wrong choice\n");
    
  }
  
 }
 getch();
 return 0;
}




