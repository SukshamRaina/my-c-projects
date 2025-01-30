/*
Problem Statement

Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

Note : 1st element of the array should be considered in the count of the result.

Input Format

Input Size i.e N Read N elementes in an array

Constraints

1 <= N <=100

Output Format

Print count of elements whose value is greater than all of its prior elements

Sample Input 0

5
7 4 8 2 9
Sample Output 0

3
*/
#include <stdio.h>

int main(){

    int n,count=1;
    
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
        count++;
        largest=arr[i];}
    }
    printf("%d",count);
    return 0;
}