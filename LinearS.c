#include<stdio.h>
void LinerSearch(int a[],int r,int s)
{
	int k=0,i;
	for(i=0;i<r;i++){
		if(a[i] == s){
			printf("Number is found at position %d",i+1);
			k++;
			break;
		}
	}
	if(k==0){
		printf("Number is not fonud");
		
	}
}
int main()
{
	int i,a[100],s;
	int r;
	printf("enter a range:");
	scanf("%d",&r);
	printf("Enter %d element: ",r);
	for(i=0;i<=r-1;i++){
		scanf("%d",&a[i]);
	}
	printf("enter a number that you want to search");
	scanf("%d",&s);
	LinerSearch(a,r,s);
	getch();
}
