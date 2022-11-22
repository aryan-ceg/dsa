#include<stdio.h>

int main()
{
	int arr[100];
	printf("All Elements are...\n");
	for(int i=0;i<100;i++)
	{
		arr[i]=i+1;
		printf("|%d|",arr[i]);
	}
	printf("==============Pair of Sum of 50==============\n");
	int sum=0;
	int count=0;
	for(int i=0;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==50)
			{
				printf("|%d +%d |\n",arr[i],arr[j]);
				count++;
			}
		
		}
	}
	
	printf("Total Pair is %d:",count);
	
	
	
	printf("\n");
	return 0;
}
