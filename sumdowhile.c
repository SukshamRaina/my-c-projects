//write a program  to find the sum of all the input number until user input zero
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int sum = 0,num;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        sum += num;
    }
    while(num!=0);
    printf("sum =%d",sum);
    return 0;
}