//WAP to store the information of two student marks using structure and find total marks.
#include <stdio.h>
#include<stdlib.h>
struct student
{
    int rollnumber;
    char name[30];
    int marks[5];
};

int main(){
    system("cls");
int total1 = 0,total2=0;
    struct student s1;
    printf("Enter Roll number of student 1 : ");
    scanf("%d",&s1.rollnumber);
    printf("Enter name : ");
    scanf("\n%[^\n]s",&s1.name);
    printf("Enter marks of 5 subjects : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1.marks[i]);
        total1+=s1.marks[i];
    }

    struct student s2;
    printf("Enter Roll number of student 2 : ");
    scanf("%d",&s2.rollnumber);
    printf("Enter name : ");
    scanf("\n%[^\n]s",&s2.name);
    printf("Enter marks of 5 subjects : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s2.marks[i]);
        total2+=s2.marks[i];
    }
    printf("Roll number Name Total marks");
    printf("%10d %15s %10d\n",s1.rollnumber,s1.name,total1);
    printf("%10d %15s %10d\n",s2.rollnumber,s2.name,total2);
    return 0;
}