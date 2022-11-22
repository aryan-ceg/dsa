//4.	Write a program to find the second largest of n numbers using an array.
#include<stdio.h>
int main()
{
    printf("==========Second Largest in Array=============\n");

	int arr[100];
	int s;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	int largest;
	int secondLargest;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]);
		c++;
	}
	largest=secondLargest=0;
	for(int i=0;i<s;i++)
	{
		if(arr[i]>largest)
		{
        secondLargest=largest;
		largest=arr[i];
		}
		else if(arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest=arr[i];
        }
	}
	printf("Second Largest Number is %d",secondLargest);

	printf("\n");
	return 0;
}
