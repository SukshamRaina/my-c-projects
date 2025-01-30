//  fopen() function
#include <stdio.h>
int main(){

    FILE*fp=fopen("data.txt","r");
    if (fp==NULL){
        printf("file not found !!!");
        }
    else{
        printf("file found !!!");
    }
fclose(fp);
    return 0;
}