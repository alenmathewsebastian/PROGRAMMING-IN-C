#include<stdio.h>
void create();
int main()
{
    create();
    return 0;
}
void create()
{
    int a[10],n,i;
    printf("Enter the limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}