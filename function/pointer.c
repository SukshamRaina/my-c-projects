#include <stdio.h>
#include<stdlib.h>
int main(){

    // int x=10;
    // int *p1=&x;
    // int **p2=&p1;
    // int ***p3=&p2;
    //printf("value of x is %d",***p3);
    int arr[5]={11,35,51,27,13};
    int *p1=arr;
    for (int i =0;i<5;i++)
    {
        printf("%d\t",*(p1+i));
    }
    printf("\n");
    for (int i =0;i<5;i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    for (int i =0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i =0;i<5;i++)
    {
        printf("%d\t",p1[i]);
    }
    
    return 0;
}
