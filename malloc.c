#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;
    printf("enter the limit :");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("array elements are :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    return 0;

}