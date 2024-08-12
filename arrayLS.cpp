#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i,max,min;
	cout<<"enter the size of the array: ";
	cin>>n;
	cout<<"Enter the element of the array: ";
	for(i = 0;i<n;i++)
		cin>>arr[i];
	
	max = arr[0];
	
	for(i = 0;i<n;i++){
		if(max<arr[i])
			max = arr[i];
    }
	min = arr[0];
		
	for(i = 0;i<n;i++){
		if(min > arr[i])
			min = arr[i];
		
	}
	cout<<"largest element: " << max<< endl;
	cout<<"smallest element: " << min;
	return 0;
	
}
