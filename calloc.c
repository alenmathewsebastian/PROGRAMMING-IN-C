#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p,sum=0;
    printf("enter the limit :");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("sum of array is :");
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("%d",sum);
    return 0;

}