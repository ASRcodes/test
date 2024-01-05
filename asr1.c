#include<stdio.h>
// void swapping(int a,int b);
// int main (){
//     int x,y;
//     printf("\n Enter two numbers: ");
//     scanf("%d%d",&x,&y);
//     swapping(x,y);

//         return 0;
// }
// void swapping(int a,int b){
//     int t;
//     printf("\nBefore swapping: ");
//     printf("\nA = %d",a);
//     printf("\nBefore swappinf: ");
//     printf("\nB = %d",b);
//     printf("\n After swapping");
//     t=a;
//     a=b;
//     b=t;
//     printf("\n A = %d",a);
//     printf("\n B = %d",b);

// }

// int fib(int num)
// {
// 	if(num==0){
// 		return 0;
// 	}
// 	else if(num==1){
// 		return 1;
// 	}
// 	else{
// 		return fib(num-1)+fib(num-2);
// 	}
// }
// int main(){
// 	int num;
// 	printf("enter a number of elements to be in the series : ");
// 	scanf("%d",&num);
//   for(int i=0;i<num;i++){
//   	printf("%d,",fib(i));
//   }
	
// 	return 0;
// }

// void main(){
// 	int num[5];
// 	int i,j,a,n;
	
// 	printf("enter the elements");
// 	for(i=0;i<n;++i)
// 	scanf("%d",&num[i]);
	
// 	for(i=0;i<n;++i){
// 		for(j=i+i;j<n;++j){
// 			if(num[i]>num[j]){
// 				a = num[i];
// 				num[i]=num[j];
// 				num[j]=a;
// 			}
// 		}
// 	}
// 	printf("the numbers in ascending order is : ");
// 	for(i=0;i<n;++i)
// 	printf("%d",num[i]);
// }

// int main()
// {
// 	int n,max,min,a[10];
// 	for(int i=0;i<10;i++){
	
// 	printf("enter the elements [%d] : ",i+1);
// 	scanf("%d",&a[i]);
	
// 	if(i==0){
// 	min=max=a[i];
// }
// 	else{
// 	if(min>a[i]){
// 	min = a[i];
// 	}
// 	if(max<a[i]){
// 	max = a[i];
// 	}
//   }
// }
// printf("\nmaximum = %d",max);
// printf("\nminimum = %d",min);

// return 0;
// }

int main()
{
	int a[10],i,n,x;
	
	printf("enter 10 elements  of array : ");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}

printf("enter to be searched : ");
scanf("%d",&x);

for(i=0;i<10;i++){
	if(a[i]==x)
	break;
}
	if(i<=a[i])
	printf("element found at index %d",i);
	else
	printf("element not found");
	return 0;
}
	


















// int fib(int n){
// 	if(n==0)
// 	return 0;
// 	else if(n==1)
// 	return 1;
// 	else
// 	return fib(n-1)+fib(n-2);
// }
// int main(){
// 	int n;
// 	printf("enter a number : ");
// 	scanf("%d",&n);
	
// 	for(int i=0;i<n;i++){
// 		printf("%d\t",fib(i));
// 	}

// 	return 0;
// }

// int main()
// {
// 	int n,fact=1;
// 	printf("enter a number : ");
// 	scanf("%d",&n);
	
// 	if(n<0){
// 		printf("Error!!");
// 	}
// 	else{
// 		for(int i=1;i<=n;i++){
// 			fact = fact*i;
// 		}
// 		printf("factorial = %d ",fact);
// 	}
// 	return 0;
// }