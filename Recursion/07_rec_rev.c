//WAP to reverse a number
#include <stdio.h>
#include<stdlib.h>
int reverse(x){
    static rev ;
    if(x!=0){
        rev=rev*10+x%10;
        reverse(x/10);
    }
    return rev;
}
int main(){
system("cls");
    int x;
    printf("Enter number = ");
    scanf("%d",&x);
    printf("Number of digits are = %d",reverse(x));
    return 0;
}