//WAP to perform deletion of first occurence
#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int n,target;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the target element ");
    scanf("%d",&target);
    int arr[n];
    printf("Enter elements of array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i]==target){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
           n--;
           break;
        }
        
    
    
    }

    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}