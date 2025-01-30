//WAP to print series of function using recursion
#include <stdio.h>
#include<stdlib.h>
void printSeries(n){
    if (n!=0){
        printSeries(n-1);
        printf("%d ",n);
    }
}
int main(){
system("cls");
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printSeries(n);
    return 0;
}