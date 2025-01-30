/*
Problem Statement

Task is to remove all characters in a string except alphabets. Given a string, remove all the characters except alphabets and display it as output.

Input Format

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.

Constraints

No

Output Format

Print String

Sample Input 0

pro$#&gra7m
Sample Output 0

program
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
system("cls");
char str[200];
printf("Enter string ");
scanf("\n%[^\n]s",str);
for(int i=0;str[i];i++){
    if(isalpha(str[i]))
    printf("%c",str[i]);
}
    
    return 0;
}