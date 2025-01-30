//WAP to print factorial using recursion
#include <stdio.h>
#include<stdlib.h>
int fact(n){
    if (n==0 || n==1){
        return 1;
        }
    else{
        return n *fact(n-1);
        
    }
}
int main(){
system("cls");
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    int fac =fact(n);
    printf("%d",fac);
    return 0;
}