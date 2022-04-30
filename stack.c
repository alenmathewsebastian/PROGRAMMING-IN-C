#include<stdio.h>
#define Max 10
int stack[Max],top=-1;
int push();
int pop();
int peek();
int display();

int main(void)
{
    int ch;
    do
    {
        printf("\n***main menu***\n");
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.peek");
        printf("\n4.display");
        printf("\n5.exit");
        printf("Enter your choice :\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
        }        
    } while (ch!=5);
    return 0;
}
int push()
{
    int item;
    if(top==Max-1)
    {
        printf("overflow");
    }
    else
    {
        printf("enter the element to push :");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
    return 0;
}
int pop()
{
    int item;
    if (top==-1)
    {
        printf("underflow");
    }
    else
    {
        item=stack[top];
        top=top-1;
        printf("popped element is :%d",item);
    }
    return 0;
}
int peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else 
    {
        printf("top element is %d",stack[top]);
    }
    return 0;
}
int display()
{
    int i;
    if(top==-1)
    {
    printf("stack is empty");
    }
    else
    {
        printf("***stack***\n");
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
    }
    return 0;
}