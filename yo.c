#include<stdio.h>

int main(){
    int a[5] = {12,34,56,56,18};
    int i,item,loc;

    printf("enter item you want to search ");
    scanf("%d",&item);

    for(i=0;i<5;i++){
        if(a[i]== item){
            printf("item found %d",item);
            break;
        }
        
    
    }
  return 0;  
}













/*int main(){
    char s1[100],s2[100];

    printf("enter string1: ");
    gets(s1);
    printf("enter string2: ");
    gets(s2);
    
    strcat(s1,s2);

    printf("combined string = '%s'\n",s1);

    return 0 ;
}*/


/*int sum(int a,int b);
int main(){
    int a,b;

printf("enter first digit: ");
scanf("%d",&a);
printf("Enter second digit: ");
scanf("%d",&b);

int s = sum(a,b);
printf("Sum is : %d\n & number is %d%d",s,a,b);
return 0;
}
int sum(int a,int b){
    return a+b;
}*/


/*int printTable(int n);
int main(){
    int n;

printf("Enter the number: ");
scanf("%d", &n);

printTable(n);
}
int printTable(int n){
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",i,n,i*n);
    }
}
*/