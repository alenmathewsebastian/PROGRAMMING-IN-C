#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float mark;

};
int main()
{
    struct student s[3];
    int i;
    printf("Enter the details\n");
    for(i=0;i<3;i++)
    {
        printf("enter the name :");
        scanf("%s",s[i].name);
        printf("enter the rollno :");
        scanf("%d",&s[i].roll);
        printf("enter the mark :");
        scanf("%f",&s[i].mark);
    }
    printf("STUDENT DETAILS\n");
    printf("NAME\tROLLNO\tMARK\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%f\n",s[i].name,s[i].roll,s[i].mark);
    }
    return 0;
}