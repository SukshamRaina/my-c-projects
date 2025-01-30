#include <stdio.h>
#include<stdlib.h>
struct Book{
    int book_id;
    char book_name[30];
    int price;
};
int main(){
system("cls");
    struct Book b1;
    struct Book*ptr=&b1;

    printf("Enter Book Id : ");
    scanf("%d",&ptr->book_id);
    printf("Enter Book Name : ");
    scanf("\n%[^\n]s",ptr->book_name);
    printf("Enter Book Price : ");
    scanf("%d",&ptr->price);
    printf("Book id = %d\n",ptr->book_id);
    printf("Book Name = %s\n",ptr->book_name);
    printf("Book price = %d",ptr->price);
    return 0;
}