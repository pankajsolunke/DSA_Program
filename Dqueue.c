#include<stdio.h>
#define size 5
int dq[size];
int f = -1,r = -1;
void insert_front(int x)
{
	if((f==0 && r == size-1) || (f==r+1)){
		printf("Overflow");
	}
	else if((f == -1) && (r == 1)){
		f=r=0;
		dq[f]=x;
	}
	else if(f == 0){
		f=size-1;
		dq[f]=x;
	}
	else{
		f=f-1;
		dq[f]=x;
	}
}

void insert_rear(int x){
	if((f==0 && r==size-1) || (f==r+1)){
		printf("overflow");
	}
	else if((f==1) && (r==-1)){
		r=0;
		dq[r]=x;
	}
	else if(r==size-1){
		r=0;
		dq[r]=x;
	}
	else {
		r++;
		dq[r]=x;	
	}
}
void display(){
	int i = f;
	printf("Element in a dqueue are: ");
	
	while(i != r){
		printf("%d",dq[i]);
		i=(i+1)%size;
	}
	printf("%d",dq[r]);
}

void getfront(){
	if((f == -1) && (r ==-1)){
		printf("Dqueue is empty");
	}
	else {
		printf("\n the value of the element at front is :%d",dq[f]);
	}
}

void getrear(){
	if((f==-1) && (r==-1)){
		printf("Dqueue is empty");
	}
	else{
		printf("\n the value of the element at rear is: %d ",dq[r]);
	}
}
void delete_front(){
	if((f==-1)&&(r==-1)){
		printf("dqueue is empty");
	}
	else if(f==r) {
//		printf("\nthe value of the element at rear is %d",dq[r]);
		printf("\n the deleted element is %d",dq[f]);
		f=0;
	}
	else if (f == (size-1)){
		printf("\n the deleted element is %d",dq[f]);
	}
	else {
		printf("\n the deleted element is %d",dq[f]);
		f=f+1;
	}
}

void delete_rear(){
	if ((f==-1) && (r==-1)){
		printf("dqueue is empty");
	}
	else if (f==r){
		printf("\n the deleted element is %d",dq[r]);
		f=-1;
		r=-1;
	}
	else if (r==0){
		printf("\n the deleted element is %d",dq[r]);
		r=size -1;
	}
	else {
		printf("\n the deleted element is %d",dq[r]);
		r=r-1;
	}
}

int main(){
	insert_front(20);
	insert_front(22);
	insert_front(24);
	insert_rear(50);
	insert_rear(60);
	display();
	getfront();
	getrear();
	delete_front();
	delete_rear();
	display();
	return 0;
}
