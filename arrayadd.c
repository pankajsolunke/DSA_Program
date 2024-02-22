int main()
{
	int A[100];
	int i,j,n;
	int sum=0;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	     {
	     	printf("\n Enter Array elements : \n");
	     	scanf("%d",&A[i]);
	    }
    for (i=0;i<n;i++)
    {
    	sum=sum+A[i];
	}
	printf("\n Summation of array is=%d",sum);
	return 0;
}
