#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
void push();
void pop();
void display();
int top;
int a[5];
void main(){
    int choice;
    char ch;
    top = 7;
    do
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.exit");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
           push();
            break;
        case 2:
           pop();
            break;
        case 3:
            display();
              break;
        case 4:
            exit(0);
              break;

        default:
            printf("wrong choice  ");
            break;
        }
        printf("\n do you want to continue y/n: ");
       ch = getch();
    } while (ch=='y');
}
void push(){
    int item;
    if (top==4)
    {
        printf("stack is full");
    }
    else{
        printf("enter the item to be inserted : ");
        scanf("%d",&item);

        top = top+1;
        a[top] = item;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        item = a[top];
        top =top-1;

        printf("%d is deleted",item);
    }
}
void display(){
    int i;
    for(i=top;i>0;i--)
{
    printf("\t%d\n",a[i]);
}

}



















































// struct book
// {
//     char title[50];
//     char author[50];
//     float price;
//     char publisher[50];
//     /* data */
// };
// int main(){
//     struct book book[10];

//     for(int i = 0;i<10;i++){
//         printf("enter details for book %d: \n",i+1);

//         printf("titlr: ");
//         scanf("%s",book[i].title);
//         printf("author: ");
//         scanf("%s",book[i].author);
//         printf("price: ");
//         scanf("%f",book[i].price);
//         printf("publisher: ");
//         scanf("%c",book[i].publisher);

//     }
//     printf("\ndetails of book costing more than 800 rupees: \n");
//     for(int i=0;i<10;i++){
//         if(book[i].price>800){
//             printf("title: %s\n",book[i].title);
//         }
//     }
//     return 0;
// }

















































































































































