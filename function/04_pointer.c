#include <stdio.h>
#include<stdlib.h>
void show (int *a,int *b){
    *a=1000;
    *b=2000;
    printf("a=%d\t b=%d\n ",*a,*b);
}
int main(){
system("cls");
    int x=10,y=20;
    printf("x=%d\t y=%d\n",x,y);
    // show(x,y);
    // printf("x=%d\t y=%d\n",x,y);
    show(&x,&y);
    printf("x=%d\t y=%d\n",x,y);
    return 0;
}