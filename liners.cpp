#include<iostream>
using namespace std;

void LinerSearch(int a[],int r,int s)
{
	int k=0,i;
	for(i=0;i<r;i++){
		if(a[i] == s){
			cout<<"Number is found at position "<<i+1;
			k++;
			break;
		}
	}
	if(k==0){
		cout<<"Number is not fonud";
	}
}
int main()
{
	int i,s,r;
	cout<<"enter a range: ";
	cin>> r;
	int a[r];
	cout<<"Enter "<< r <<" element: ";
	for(i=0;i<=r-1;i++){
		cin>>a[i];
	}
	cout<<"enter a number that you want to search";
	cin>>s;
	LinerSearch(a,r,s);
}
