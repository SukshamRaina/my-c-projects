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
    FILE*fp=fopen("data.txt","r");
    if (fp==NULL){
        printf("file not found !!!\n");
        }
    else{
        printf("file found !!!\n");
    }
    char str[200];
    char ch;
    int count=0,vcount=0,ccount=0,acount,ncount=0;
    
    for (int i = 0; i < strlen(str); i++) {
        count++;
        if (isalpha(str[i])) {
        str[i]=tolower(str[i]);
        
            acount++;
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                vcount++;
            }
            else
                ccount++;

        }
        else if(isdigit(str[i])){
        ncount++;
        }
    }
    printf("Total Character in file is %d\n",count);
    printf("Total Alphabet in file is %d\n",acount);
    printf("Total Vowel in file is %d\n",vcount);
    printf("Total Consonants in file is %d\n",ccount);
    printf("Total Digits in file is %d\n",ncount);
    fclose(fp);
    return 0;
}