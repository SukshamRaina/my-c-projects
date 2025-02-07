/*
bjective

Rijul just got an offer letter from a reputable company. The company sent him an offer letter along with the salary bifurcation. In that bifurcation,Total Salary was not mentioned but basicSalary is given, depending on which the Total Salary is calculated.

Help Rijul in calculating his total salary on the following conditions:-

image

Input Format

Take an input of basic salary

Constraints

0<=n<=100000

Output Format

Print the gross salary

Sample Input 0

1000
Sample Output 0

1300.00
*/

#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int sal;
    printf("Enter salary ");
    scanf("%d",&sal);
    if (sal<=2000)
    printf("%.2f",sal+(sal*0.1)+(sal*0.2));
    else if (sal>2000 && sal<=5000)
    printf("%.2f",sal+(sal*0.2)+(sal*0.3));
    else if (sal>5000 && sal<=10000)
    printf("%.2f",sal+(sal*0.3)+(sal*0.4));
    else 
    printf("%.2f",sal+(sal*0.5)+(sal*0.5));
    return 0;
}
