//18.	Write a program to read a floating point array.
//Update the array to insert a new number at the specified location.
#include<stdio.h>
int s=0;
void insertAtPostion(float arr[],int position,int s)
{
    if(position>=0 && position<s)
    {
        float data;
        printf("Your Entered index is %d\nNow Enter Data for insert: ",position);
        scanf("%f",&data);
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
            printf("| %.2f ",arr[i]);
        }
    }
    else{
        printf("\nInvalid Position\n");
    }
}

int main()
{
    printf("========== Insert Float element in array at given location ==========\n");
	float arr[100];
	int position;
	printf("Enter size of Array: ");
	scanf("%d",&s);
	int c=1;
	for(int i=0;i<s;i++)
	{
		printf("Now Enter %d Element: ",c);
		scanf("%f",&arr[i]);
		c++;
	}
	printf("Enter Position(index) where you want to insert: \nIndex must be less than %d: ",s);
	scanf("%d",&position);

	insertAtPostion(arr,position,s);

	printf("\n");
	return 0;
}
