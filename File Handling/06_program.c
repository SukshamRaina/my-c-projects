// WAP to read and write in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("cls");
    FILE*fp=fopen("data2.txt","a+");
    if (fp==NULL){
        printf("file not found !!!");
        exit(0);
        }
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]c",str);
    strcat(str,"\n");
    fputs(str,fp);
    printf("String is written in file Successfully");
    //Reading data from a file
    rewind(fp);
    char ch;
    while (ch != EOF)
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
fclose(fp);
    return 0;
}