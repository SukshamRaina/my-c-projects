//WAP to print a table
#include <stdio.h>
#include<stdlib.h>
void table(n){
    static int i=1;
    if(i<=10){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
        table(n);
    }
}
int main(){
system("cls");
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    table(n);
    return 0;
}