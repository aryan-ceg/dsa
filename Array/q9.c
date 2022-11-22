//9.	Write a program to delete a number from an array that is already sorted in ascending order.


#include<stdio.h>
int s=5;
void deleteAtPostion(int arr[],int position)
{
    int flag=0;
    if(position>=0 && position<s)
    {
        printf("Your Deleted Element is %d ",arr[position]);
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

int binarySearch(int arr[], int l, int r, int s)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == s)
            return m;

        // If x greater, ignore left half
        if (arr[m] < s)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    printf("========== Delete element from Sorted Array ==========\n");
	int arr[]={5,52,54,150,200};
	int data;
	printf("\nElements in Array are...\n");
	for(int i=0;i<s;i++)
    {
        printf("| %d ",arr[i]);
    }
	printf("\nEnter Elements for delete ");
	scanf("%d",&data);
    int index=binarySearch(arr,0,s-1,data);
    if(index!=-1)
    {
        deleteAtPostion(arr,index);
        printf("\nElements After Deleted in Array are...\n");
        for(int i=0;i<s;i++)
        {
            printf("| %d ",arr[i]);
        }
    }
	else
	{
        printf("\nElement Not Found in Array\n");
	}



	printf("\n");
	return 0;
}
