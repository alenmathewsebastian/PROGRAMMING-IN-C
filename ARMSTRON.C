#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,temp,c;
	clrscr();
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is an armstrong number\n",sum);
	}
	else
	{
		printf("%d is not an armstrong number\n",temp);
	}
	getch();
}