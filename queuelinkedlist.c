#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
int isempty()
{
	return front==NULL;
}
int enqueue(int value)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=value;
	new->link=NULL;
	if(front==NULL)
	{
		front=rear=new;
	}
	{
		rear->link=new;
		rear=new;
	
}
}



	/*if(rear==NULL)
	rear=new;
	rear->link=NULL;
	rear=new;*/

int dequeue()
{
	int a;
	a=front->data;
	struct node* temp=front;
	temp=front;
	if(isempty())
	{
		printf("queue is empty");
	}

	else
	{
		front=temp->link;
		free(temp);
	}
          return a;
}
int front_value()
  {
	if(isempty())
		printf("Queue is empty");
	else
	{
		return front->data;
	}

}
void display()
{
	struct node *temp=front;
	temp=front;
	if(isempty())
	{
		printf("queue is empty");
	}
	while(temp!=NULL)
	{
		printf("%d",temp->data);
	temp=temp->link;
}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("queue intialize vaue are:\n");
        display();
	printf("front value=%d",front_value());
	dequeue();
	dequeue();
	printf("elements after dequeue are:\n");
	display();

}

