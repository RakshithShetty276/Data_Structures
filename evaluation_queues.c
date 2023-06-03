#include<stdio.h>
#include<stdlib.h>
#define x 5
struct queue
{
    int data[x];
    int rear;
    int front;
};

void enqueue(struct queue *q,int a);
int dequeue(struct queue *q);
void display(struct queue *q);
void main()
{
    struct queue q_var,*q;
    q=&q_var;
    q->rear=q->front=-1;
    int ch,age;
    while(1)
    {
        printf("\nEnter:\n 1:Enqueue\t 2:Display\t 3:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the age of a passenger\n");
                   scanf("%d",&age);
                   enqueue(q,age);
                   break;
            case 2:display(q);
                   break;
            case 3:exit(0);
            default:printf("Invalid choice\n");
                    break;
        }
    }
}

void enqueue(struct queue *q,int a)
{
    int i;
    if(q->rear==x-1)
    {
        printf("Queue overflow\n");
    }
    else if(q->rear==-1 && q->front==-1)
    {
        q->rear=q->front=0;
        q->data[q->rear]=a;
    }
    else
    {
        i=q->rear;
        q->rear++;
        while(i>=0 && q->data[i]<=a)
        {
            q->data[i+1]=q->data[i];
            i--;
        }
        q->data[i+1]=a;
    }
}
void display(struct queue *q)
{
    int i;
    if(q->front==-1 && q->rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Age of passengers in descending sequence\n");
        for(i=q->front;i<=q->rear;i++)
        {
            printf("%d \n",q->data[i]);
        }
        printf("\n");
    }
}
