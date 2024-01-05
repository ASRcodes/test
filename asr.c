#include<stdio.h>
#define MAX 50
// int square(int n);
// int _square(int *n);
// int main(){
//     int number = 8;
//     square(number);

//     printf("number is = %d\n",number);
    
//     _square(&number);
//     printf("number = %d\n",number);
//     return 0;
// }
// int square(int n){
//     n = n*n;
//     printf("square = %d\n",n);
// }
// int _square (int *n){
//     *n = (*n)*(*n);
//     printf("squre = %d\n",*n);
// }
void insert();
void delete ();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;

main()
{
	int choice;
	while(1){
		printf("1.Insert element to queue\n");
		printf("2.Delete elements from queue\n");
		printf("3.Display all elements of queue\n");
		printf("4.Quit\n");
		
		printf("enter your choice : ");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
				insert();
				break;
				case 2:
					delete();
					break;
					case 3:
						display();
						break;
						case 4:
							exit(1);
	default : 
	printf("wrong choice \n");
		}
	}
	}
	void insert()
	{
		int add_item;
		if(rear == MAX-1)
		printf("Queue overflow \n");
		else{
			if(front == -1)
			front = 0;
			printf("Insert the elements in queue : ");
			scanf("%d",&add_item);
			rear = rear + 1;
			queue_array [rear]=add_item;
		}
	}
	void delete()
	{
		if(front==-1 || front>rear){
			printf("Queue underflow \n");
			
			return ;
		}
	
	else {
		printf("Element deleted from queue is : %d\n",queue_array[front]);
		
		front = front+1;
	}}
	void display (){
		int i;
		if(front==-1)
		printf("Queue is empty\n");
		else{
			printf("Queue is : \n");
			for(i=front;i<=rear;i++)
			printf("%d",queue_array[i]);
			printf("\n");
		}
	}

