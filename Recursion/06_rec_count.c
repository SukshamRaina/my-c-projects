//WAP to count number of digits in number
#include <stdio.h>
#include<stdlib.h>
int countDigits(int n){
    static int count = 0;
    if(n!=0){
        
        count++;
        countDigits(n/10);

    }
    return count;
}
int main(){
system("cls");
int x;
    printf("Enter number = ");
    scanf("%d",&x);
    printf("Number of digits are = %d",countDigits(x));
    return 0;
}