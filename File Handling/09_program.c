// WAP to add two number takingin input and output from file
#include <stdio.h>
int main(){

    FILE*fp=fopen("sum.txt","a+");
    if (fp==NULL){
        printf("file not found !!!");
        }
    else{
        printf("file found !!!");
    }

    int x,y,sum;
    fscanf(fp,"%d %d",&x,&y);
    sum=x+y;
    fprintf(fp,"\n Sum of %d and %d is %d",x,y,sum);
fclose(fp);
    return 0;
}