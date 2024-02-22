#include<stdio.h>
int main()
{
	int i,j,first[3][3],second[3][3],sum[3][3];
	printf("Enter the elements for 1st matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&first[i][j]);
		}
		
	}
	printf("Enter the elements for 2nd matyrix \n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	printf("sum of both matrices is:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
   }
     return 0;
 }
