//8. Write a program to delete a number from a given location in an array.

#include<stdio.h>
int s=5;
void deleteAtPostion(int arr[],int position)
{
    int flag=0;
    if(position>=0 && position<s)
    {
        int data;
        printf("Your Entered index is %d\n Deleted element is %d ",position,arr[position]);
        int temp=s+1;
        if(position==s-1)
        {
            s=s-1;
        }
        else
        {
           for(int i=0;i<s;i++)
           {
               if(i>=position)
               {
                   arr[i]=arr[i+1];
                   flag=1;
               }
           }
        }
        if(flag==1)
        {
            s--;
        }
        printf("\nElement Deleted Successfully...");

    }
    else{
        printf("\nInvalid Position\n");
    }
}

int main()
{
    printf("========== Delete element in array at given location ==========\n");
	int arr[]={5,52,654,50,100};
	int position;
	printf("\nElements in Array are...\n");
	for(int i=0;i<s;i++)
    {
        printf("| %d ",arr[i]);
    }
	printf("\nEnter Position(index) where you want to insert: \nIndex must be less than %d: ",s);
	scanf("%d",&position);

	deleteAtPostion(arr,position);
	printf("\nElements After Deleted in Array are...\n");
    for(int i=0;i<s;i++)
    {
        printf("| %d ",arr[i]);
    }

	printf("\n");
	return 0;
}
