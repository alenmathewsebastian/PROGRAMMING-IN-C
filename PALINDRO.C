#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,temp;
	clrscr();
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is a palindrome\n",sum);
	}
	else
	{
		printf("%d is not a plindrome\n",temp);
	}
	getch();
}