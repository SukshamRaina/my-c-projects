
//use of malloc
#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int *p1=(int*)malloc(sizeof(int));
    float *p1=(float*)malloc(sizeof(float));
    free(p1);
    free(p2);
    return 0;
}