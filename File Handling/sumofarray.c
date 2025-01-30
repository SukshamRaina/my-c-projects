/*
Given an array of intergers, your task is to find the sum of array elements.

Input Format

Take size of array i.e N Read array elements

Constraints

1 <= N <=1000

Output Format

Print sum of all array elements

Sample Input 0

5
7 11 9 20 5
Sample Output 0

52
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}