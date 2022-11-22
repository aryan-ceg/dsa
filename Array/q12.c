
#include<stdio.h>
int smallest(int arr[],int s)
{
	int small;
	small=arr[0];
	for(int i=1;i<s;i++)
	{
		if(small>arr[i])
		{
		small=arr[i];
		}
	}
	return small;
}
int main()
{
	printf("==============Smallest with funtion==============\n");
	int arr[100];
	int s;
	int small;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]);
		c++;
	}

	printf("==============Smallest in Array =============\n");
	printf("Smallest is %d ",smallest(arr,s));

	printf("\n");
	return 0;
}
