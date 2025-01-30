// WAP to write a charcter in a file
#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    FILE*fp=fopen("data2.txt","a");
    if (fp==NULL){
        printf("file not found !!!");
        exit(0);
        }
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    fputc(ch,fp);
    printf("Character is written in file");
    
fclose(fp);
    return 0;
}