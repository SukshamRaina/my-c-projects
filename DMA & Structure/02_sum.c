//WAP to perform sum of N numbers using DMA
#include <stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n,sum=0;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    int *p1=(int*)malloc(sizeof(int));
    for(int i=0;i<n;i++){

        printf("Enter value :");
        scanf("%d",p1+1);
        sum+=*(p1+1);
    }
    p1 = realloc(p1,2*sizeof(int));
    printf("Enter value :");
        scanf("%d",p1+n);
        sum+=*(p1+n);
     printf("Enter value :");
        scanf("%d",p1+n+1);
        sum+=*(p1+n+1);
    printf("Sum = %d",sum);
    free(p1+1);
    return 0;
}