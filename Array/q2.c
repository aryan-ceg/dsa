//Write a program to find the average of n numbers using arrays.

#include<stdio.h>

int main()
{
	printf("==============Average of N Number==============\n");
	int arr[100];
	int s;
	double avg;
	double sum=0;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]); 
		c++;
		sum=sum+arr[i];
	}
	
	printf("==============Average==============\n");
	avg=sum/s;
	printf("Average is %lf",avg);
	
	printf("\n");
	return 0;
}
