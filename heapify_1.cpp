#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
	int largest = i;
	int l = 2 * i + 1; //left = 2*i+1
	int r = 2 * i + 2; //right = 2*i+2
	
	if(l < n && arr[l] > arr[largest])
		largest = l;
		
	if(r < n && arr[r] > arr[largest])
		largest = r;
		
	if(largest != i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}

void buildMaxHeap(int arr[],int n){
	for(int i = n/2-1;i>=0;i--)
		heapify(arr,n,i);
}

void printarray(int arr[],int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
		
	cout<<endl;
}

int main(){
	int arr[]= {4,10,3,5,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"Original array: ";
	printarray(arr,n);
	
	buildMaxHeap(arr,n);
	
	cout<<"Max Heap: ";
	printarray(arr,n);
	
	return 0;
}
