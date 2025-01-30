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
    int n;
    printf("Enter Size");
    scanf("%d",&n);
    struct student stu[n];
    int total=0;
    for (int i=0;i<n;i++){ 
    printf("Enter Roll number of student 1 : ");
    scanf("%d",&stu[i].rollnumber);
    printf("Enter name : ");
    scanf("\n%[^\n]s",stu[i].name);
    printf("Enter marks of 5 subjects : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&stu[i].marks[i]);
        stu[i].total+=stu[i].marks[i];
    }
    }
    for (int j=0;j<n;j++){
    
    printf("%10d %15s %10d\n",stu[i].rollnumber,stu[i].name,stu[i].total);
    }
    return 0;
}