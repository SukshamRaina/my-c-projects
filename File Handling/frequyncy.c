/*Objective

Given a string, find the second most frequent character in it. Expected time complexity is O(n) where n is the length of the input string.

Examples

Input: str = "aabababa"; Output: Second most frequent character is 'b'

Input: str = "aabbccac"; Output: Second most frequent character is 'b'

Input : str = "aabbbcc" Output: Second most frequent character is 'a'

Input: str = "aabbcc"; Output: There is no second most frequent character.

Input: str = "abcd"; Output: There is no second most frequent character.

NOTE:

If there is not second most frequent character then display "NO". In case of two second most frequent character print the first character that appear in string

Input Format

Take an input of String

Constraints

NA

Output Format

print second most frquent character or NO

Sample Input 0

aabababa
Sample Output 0

b
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    system("cls");
    char s1[100];
    int max = 0, max2 = 0;
    char maxChar, max2Char;
    printf("Enter string: ");
    scanf("%[^\n]s", s1);

    for (int i = 0; i < strlen(s1); i++) {
        int count = 0;
        for (int j = 0; j < strlen(s1); j++) {
            if (s1[i] == s1[j]) {
                count++;
            }
        }
        if (count > max) {
            max2 = max;
            max2Char = maxChar;
            max = count;
            maxChar = s1[i];
        } else if (count > max2 && count < max) {
            max2 = count;
            max2Char = s1[i];
        }
    }

    if (max2 > 0) {
        printf("Second most frequent character is '%c'\n", max2Char);
    } else {
        printf("NO");
    }

    return 0;
}