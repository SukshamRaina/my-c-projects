//WAP to find sum of digits of number using recursion
#include <stdio.h>
#include<stdlib.h>
int sumDigit(x){
    static int sum=0;
    
    if(x!=0){
        return x%10+sumDigit(x/10);
    }
    return sum;
}
int main(){
system("cls");
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("Sum of digits = %d",sumDigit(n));
    return 0;
}