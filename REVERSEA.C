#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[100];
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array element are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("reverse order of array is:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	getch();
}