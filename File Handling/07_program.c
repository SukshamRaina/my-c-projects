// WAP to read and write in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("cls");
    FILE*fp=fopen("data.txt","a+");
    if (fp==NULL){
        printf("file not found !!!");
        exit(0);
        }
    //Reading data from a file
    printf("Current Cursor Position = %d\n",ftell(fp));
    fseek(fp, -10,SEEK_END);
    printf("Current Cursor Position = %d\n",ftell(fp));
    char ch;
    while (ch != EOF)
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
fclose(fp);
    return 0;
}