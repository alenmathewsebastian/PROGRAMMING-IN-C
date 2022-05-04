#include<stdio.h>
#define max 5

int queue[max],rear=1,front=-1;
int insert();
int delete();
int display();

int main()
{
    int ch;
    do
    {
        printf("\n***MAIN MENU***");
        printf("\n1. insert");
        printf("\n2. delete");
        printf("\n3. display");
        printf("\n4. exit");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: 
            insert ();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
        }
    }
    while(ch!=4);
    {
        return 0;
    }
}
int insert()
{
    int item;
    if(front==0 && rear==max-1)
    {
        printf("overflow");
    }
    else 
    {
        printf("Enter the elemens :");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else if (front!=0 && rear==max-1)
        {
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=item;
    }
    return 0;
}

int delete()
{
    int val;
    if(front==-1 || front>rear)
    {
        printf("underflow");
    }
    else
    {
        val=queue[front];
        front=front+1;
        printf("deleted element is :%d ",val);
    }
    return 0;
}

int display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("***queue***\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    return 0;
}