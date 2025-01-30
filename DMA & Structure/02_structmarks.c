//WAP to store the information of student marks using structure and find total marks
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
int total = 0;
    struct student s1;
    printf("Enter Roll number : ");
    scanf("%d",&s1.rollnumber);
    printf("Enter name : ");
    scanf("\n%[^\n]s",&s1.name);
    printf("Enter marks of 5 subjects : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1.marks[i]);
        total+=s1.marks[i];
    }
    printf("Roll Number = %d\n",s1.rollnumber);
    printf("Name = %s\n",s1.name);
    printf("Total marks = %d",total);
    return 0;
}