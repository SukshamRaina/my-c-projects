//WAP to read and display details of student.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int rollnumber;
    char name[30];
    char branch[10];
    char section[10];
    float marks;
};
int main(){
    system("cls");
    struct Student s1;
    printf("Enter Roll number : ");
    scanf("%d",&s1.rollnumber);
    printf("Enter name : ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter branch : ");
    gets(s1.branch);
    printf("Enter section : ");
    gets(s1.section);
    printf("Enter marks : ");
    scanf("%f",&s1.marks);


    printf("Roll number = %d\t",s1.rollnumber);
    printf("Name = %s\t",s1.name);
    printf("Branch = %s\t",s1.branch);
    printf("Section = %s\t",s1.section);
    printf("Marks = %.2f\t",s1.marks);
    return 0;
}