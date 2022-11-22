//5.Write a program to find whether the array of integers contains a duplicate number.

#include<stdio.h>
int main()
{
    printf("========== Array contains duplicates or not =============\n");

	int arr[100];
	int s;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	int flag=0;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]);
		c++;
	}
	for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]==arr[j])
                {
                flag=1;
                }
        }
    }

	if(flag==0)
    {
        printf("\nNo Duplicates elements in Array");
    }
    else
    {
        printf("\nArray contains Duplicates Elements");
    }

	printf("\n");
	return 0;
}
