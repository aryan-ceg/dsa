
#include<stdio.h>
int main()
{
	printf("=============Smallest with index==============\n");
	int arr[100];
	int s;
	int small;
	int index;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]);
		c++;
	}
	small=arr[0];
	for(int i=1;i<s;i++)
	{
		if(small>arr[i])
		{
		small=arr[i];
		index=i;
		}
	}

	printf("==============Smallest in Array =============\n");
	printf("Smallest is %d at index %d",small,index);

	printf("\n");
	return 0;
}
