#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev_link;
	int data;
	struct node *link;
};
void double_l_l_traverse(struct node  *head);

int main()
{
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	head->prev_link=NULL;
	head->data=10;
	head->link=NULL;
	printf("%d",head->data);
	struct node *current;
	current=(struct node*)malloc(sizeof(struct node));
	current->prev_link=NULL;
	current->data=20;
	current->link=NULL;
	head->link=current;
	current->prev_link=head;
	printf("created successfully");
double_l_l_traverse(head);
return 0;
}
void double_l_l_traverse(struct node* head)
{
	struct node *temp=head;
	if(temp==NULL);
{
	printf("list is empty");
	exit(0);
}
while(temp!=NULL);
{
	printf("%d",temp->data);

temp=temp->link;
}
}

