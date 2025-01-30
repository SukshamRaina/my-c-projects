//WAP to print the n terms of fibonacci series using recursion
#include <stdio.h>
#include<stdlib.h>
int fibonacci(int n){
    static int a=0,b=1;
   
    if(n!=0){
        fibonacci(n-1);
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
    }
}
int main(){
system("cls");
int x;
    printf("Enter number");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}