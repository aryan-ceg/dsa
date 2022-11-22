//Write a program to read and display n numbers using an array.

#include<stdio.h>

int main()
{
	printf("==============Read N Number and Display==============\n");
	int arr[100];
	int s;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]); 
		c++;
	}
	printf("==============Displaying Array Elements==============\n");
	
	for(int i=0;i<s;i++)
	{
		printf("Your Entered Element at index %d is %d\n",i,arr[i]);
	}
	
	printf("\n");
	return 0;
}
