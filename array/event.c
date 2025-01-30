#include <stdio.h>
#include<stdlib.h>
int main(){
system("cls");
    int t,total=0,max=0;
    printf("total");
    scanf("%d",&t);
    int in[t],out[t];
    printf("In");
    for (int i=0;i<t;i++)
    scanf("%d",&in[i]);
    printf("Out");
    for (int i=0;i<t;i++)
    scanf("%d",&out[i]);

    for(int i=0;i<t;i++){
    total+=in[i]-out[i];
    if(total>max)
    max=total;
    }
    printf("%d",max);
    return 0;
}