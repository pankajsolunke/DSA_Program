#include<stdio.h>
int stack[100],i,j,n,choice=0,top=-1;
void main(){
	printf("Enter the number of element in the stack: ");
	scanf("%d", &n);
	printf("***********stack operatioin using array*************\n");
	
	printf("\n-----------------------------------------------------------\n");
	while(choice != 4)
	{
		printf("Chose one from the below options...\n");
		printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
		printf("\n Enter your choice: \n");
		scanf("%d",&choice);
	switch (choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				show();
				break;
			}
			case 4:
			{
				printf("Exit");
				break;
			}
			default:
			{
				printf("Please enter vaild choice: ");
		
			}
			
		};
	}
}
void push(){
	int val;
	if (top == n-1)
	  printf("\n overflow\n");
	else {
		printf("Enter the value?: ");
		scanf("%d",&val);
		top = top + 1;
		stack[top] = val;
	}
}


void pop(){
	if(top == -1)
	 printf("Underflow \n");
	 else
	   top = top-1;
}


void show(){
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top == -1){
		printf("Stack is empty\n");
	}
}
