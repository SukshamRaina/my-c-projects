#include <stdio.h>

int main() {
    int a1,a2;
    char op;
    scanf("%c",&op);
    scanf("%d%d",&a1,&a2);
    switch(op) {
        case '+': printf("d\n",a1+a2);break;
         break;
        case '-':
            printf("%d\n", a1 - a2);
            break;
        case '*':
            printf("%d\n", a1 * a2);
            break;
        case '/':
                printf("%d\n", a1 / a2);
            
            }
            break;
        default:
            printf("invalid")
    return 0;
}