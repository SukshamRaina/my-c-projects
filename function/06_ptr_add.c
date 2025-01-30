//WAP to perform the arithemetic operation of two number using pointer 
#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int a,b;
    int *p1=&a,*p2=&b;
    printf("Enter two numbers : ");
    scanf("%d%d",p1,p2);
    printf("Sum = %d\n",*p1+*p2);
    printf("DIfference = %d\n",*p1-*p2);
    printf("Product = %d\n",*p1* *p2);
    printf("Division = %d\n",*p1/ *p2);
    return 0;
}