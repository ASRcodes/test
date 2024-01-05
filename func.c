#include<stdio.h>
#include<math.h>

int main (){
int n,po;
printf("Enter number n: ");
scanf("%d",&n);
po = pow(n,2);
printf("square of the number entered is: %d",po);

    return 0;
}
float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);
/*
int main(){
float rad = 4;
printf("area of cicle: %f",circlearea(rad));

return 0;
}
float squarearea(float side){
    return side*side;
}
float rectanglearea(float a,float b){
    return a*b;
}
float  circlearea(float rad){
    return 3.14*rad*rad;
}*/

/*void printHW(int count);
int main(){

    printHW(100);
    return 0;
}
void printHW(int count){
    if(count==0){
        return;

    }

    printf("HelloWorld\n");
    printHW(count-1);
}*/
/*int sum(int n);
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf("sum is : %d",sum(n));

    return 0;
}
int sum(int n){
    if(n==1){
        return 1;

    }
    int sumNm1 =  sum(n-1);
    int SumN = sumNm1 +n;
    return SumN;
}*/

/*int  fact(int n);
int main(){
    printf("factorial is : %d",fact(3));

return 0;

}
int fact(int n){
    if(n==0){
        return 1;

    }
    int factNm1,factN;


    factNm1 = fact(n-1);
    factN = factNm1*n;
    return factN;


}*/

float convertTemp(float celcius);

int main (){
float far = convertTemp(37);

    printf("Corresponding in farhenhite : %f",far);
    return 0;
}
float convertTemp(float celcius){

    float far = celcius * 9.0/5.0+32;

    return far;
}