//  fgetc function
#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    FILE*fp=fopen("data.txt","r");
    if (fp==NULL){
        printf("file not found !!!");
        exit(0);
        }
    char ch;
        while(ch!=EOF){
        ch =fgetc(fp);
        printf("%c",ch);}
        
fclose(fp);
    return 0;
}