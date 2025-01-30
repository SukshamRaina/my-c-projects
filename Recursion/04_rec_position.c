//WAP to find position of n term in fibonacci series using recursion
#include <stdio.h>
#include<stdlib.h>
int pfibo(n){
    if(n==0 || n==1)
    return n;
    else 
    return pfibo(n-1)+pfibo(n-2);
}
int main(){
system("cls");
    int x;
    printf("Enter number");
    scanf("%d",&x);
    
    printf("Position = %d",pfibo(x));
    return 0;
}