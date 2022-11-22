//6.	Write a program to insert a number at a given location in an array.
#include<stdio.h>
int s=0;
void insertAtPostion(int arr[],int position,int s)
{
    if(position>=0 && position<s)
    {
        int data;
        printf("Your Entered index is %d\nNow Enter Data for insert: ",position);
        scanf("%d",&data);
        int temp=s+1;
        while(temp>position)
        {
            arr[temp]=arr[temp-1];
            temp--;
        }
        arr[position]=data;
        printf("\nElement Added Successfully...");
        printf("\nElements in Array are...\n");
        for(int i=0;i<=s;i++)
        {
            printf("| %d ",arr[i]);
        }
    }
    else{
        printf("\nInvalid Position\n");
    }
}

int main()
{
    printf("========== Insert element in array at given location ==========\n");
	int arr[100];
	int position;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%d",&arr[i]);
		c++;
	}
	printf("Enter Position(index) where you want to insert: \nIndex must be less than %d: ",s);
	scanf("%d",&position);

	insertAtPostion(arr,position,s);

	printf("\n");
	return 0;
}
