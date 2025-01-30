//WAP to check if a number is prime or not ; armstrong or not ;  perfect or not;
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int a){
    int flag;
    int i=2;
    while (i<=a/2)
    {
        if (a % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0)
    return 1;
    

}

int main(){
    system("cls");
    int n;
    printf("enter number");
    scanf("%d",&n);
    int val = isPrime(n);
    int arm=isarmstrong(n);
    if(val==1)
    printf("number is prime");
    else
    printf("number isn't prime");
    (arm==1)?printf("\nnumber is armstrong"):printf("\nnumber is not armstrong");

    return 0;
 }   