#include<stdio.h>
void create();
int main()
{
    create();
    return 0;
}
void create()
{
    int a[10],n,i,sum=0,avg;
    printf("Enter the limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("avg=%d",avg);
}