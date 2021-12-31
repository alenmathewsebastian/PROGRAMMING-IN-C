#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,c,i;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}