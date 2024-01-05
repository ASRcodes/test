#include<stdio.h>
// void Print(){
//     printf("Hello Kriti\n");
//     printf("AFaCjgcjg\n");
//     printf("Happy Diwali\n");

// }
// int main(){
//     Print();

//     return 0;
// }


// float AreaCircle(float r){
//     float area1 = 3.14 *(r*r);
//     return area1;
// }
// int AreaRec(int l,int b){
//     int area2 = l*b;
//     printf("Area = %d\n",area2);
// }
// int AreaSquare(int a){
//     int area3 = a*a;
//     printf ("Area = %d\n",area3); 
// }
// int main(){
//     printf("Area = %f\n",AreaCircle(9));
//     AreaRec(2,8);
//     AreaSquare(10);

//     return 0;
// }



// int sum(int a,int b){
//     int sum = a+b;

//     return sum;
// }
// int product(int a,int b){
//     int multi = a*b;

//     printf("%d X %d = %d\n",a,b,multi);
// }
// int main(){
// int a,b;
// printf("Enter two number : ");
// scanf("%d%d",&a,&b);


// printf("Sum = %d\n",sum(a,b));
// product(a,b);

// return 0;
// }


// int main(){
// int a ,b,c;
// a = 90;
// b= 6;
// c = a*b;
// printf("%d",c);
// }

// void swap (int *a ,int *b);
// void swap2(int a,int b);
// int main(){

// int x=90, y=98;
// printf("%d and %d  before any swap\n",x,y);

// // call by value
// swap2(x,y);
// printf("%d and %d  after swapping but not using pointers\n",x,y);
// printf("%d\n",x);

// // call by reference
// swap(&x,&y);
// printf("%d and %d  swapping with the pointers\n",x,y);
// printf("%d\n",x);
// }
// void swap2(int a,int b){
//     int t = a;
//     a=b;
//     b=t;
// }
// void swap(int *a,int *b){
//    int t = *a;
//    *a=*b;
//    *b=t;
// }



// struct asr
// {
//     int a;
//     float d;
//     char r[50];

// };

// int main(){

// struct asr abc = {12,9.0,"Asr"};

// printf("a = %d\n  d=%f\n  r=%s ",abc.a,abc.d,abc.r);


// return 0;
// }



// struct student
// {
//     int roll;
//     char name[10];
//     float marks;
// };

// int main(){
//     struct student s;

//     printf("Enter roll : \n Enter your name : \n marks : \n : ");
//     scanf("%d%s%f",&s.roll,&s.name,&s.marks);

//     printf("Roll = %d\n",s.roll);
//     printf("Name = %s\n",s.name);
//     printf("Marks = %f\n",s.marks);

// return 0;
// }
















//  Recursion.....
int fact(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}
int main(){
    int n;
    printf("Enter a number for its factorial : ");
    scanf("%d",&n);

    printf("Factorial of %d is = %d",n,fact(n));

    return 0;
}








