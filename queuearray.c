#include<stdio.h>
#define MAXSIZE 5
int rear=-1;
int front=-1;
int queue[MAXSIZE];
int enqueue(int data);
int dequeue();
int isfull();
int isempty();
int isempty()
{
	return rear==-1;
}
int isfull()
{
	return rear=MAXSIZE-1;
}
int enqueue(int data)
{
	return queue[rear++]=data;
}
int dequeue()
{
if(isempty())
{
	printf("queue is empty");

}
else if(front==rear)
{
	front=-1;
}
else
{
	 front++;
         return queue[front-1];
}
}
int display()
{
	int i;
	if(isempty())
	{
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	printf("Intial queue values are:\n");
	display();
	printf("elements after dequeue are:\n");
	dequeue();
	dequeue();
	display();
}
