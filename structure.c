#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int age;
    float mark;
}
s1,s2;
int main()
{
    printf("Enter the details of student 1 :\n");
    printf("Enter name :");
    scanf("%s",s1.name);
    printf("enter rollno :");
    scanf("%d",&s1.rollno);
    printf("ente the age :");
    scanf("%d",&s1.age);
    printf("enter the mark :");
    scanf("%f",&s1.mark);
    printf("Enter the details of student 2 :\n");
    printf("enter the name :");
    scanf("%s",s2.name);
    printf("enter rollno :");
    scanf("%d",&s2.rollno);
    printf("enter the age :");
    scanf("%d",&s2.age);
    printf("enter mark :");
    scanf("%f",&s2.mark);
    printf("STUDENT DETAILS\n");
    printf("NAME\tROLLNO\tAGE\tMARK\n");
    printf("%s\t%d\t%d\t%f\n",s1.name,s1.rollno,s1.age,s1.mark);
    printf("%s\t%d\t%d\t%f",s2.name,s2.rollno,s2.age,s2.mark);
    return 0;
}