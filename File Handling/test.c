/*
WAP to count character in a file.
WAP to count vowel in a file.
WAP to count alphabet and  in a file.
WAP to count digit in a file.
*/
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
    system("cls");
    FILE*fp=fopen("data.txt","a+");
    if (fp==NULL){
        printf("file not found !!!\n");
        }
    else{
        printf("file found !!!\n");
    }
    char str[200];
    fscanf(fp,"%s",str);
    int count=0,vcount=0,ccount=0,acount,ncount=0;
    tolower(str);
    for (int i = 0; i < strlen(str); i++) {
        count++;
        if(isalpha(str[i])){
        

        }
    }
    }
    printf("Character in file are %d\n",x);
fclose(fp);
    return 0;
}