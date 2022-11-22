//13.	Write a program to interchange the largest and the smallest number in an array using functions.

#include<stdio.h>

int interChangeArray(int arr[],int arraySize)
{
    int small=arr[0];
    int big=arr[0];
    int smallIndex,bigIndex;
    for (int i = 0; i < arraySize; i++)
        {
        if(arr[i]<small)
        {
            small=arr[i];
            smallIndex=i;
        }
        if(arr[i]>big)
        {
            big=arr[i];
            bigIndex=i;
        }
      }

    int a=arr[bigIndex];
    arr[bigIndex]=arr[smallIndex];
    arr[smallIndex]=a;

    printf("\nElements After Interchange Small to Large\n");
    for(int i=0;i<arraySize;i++)
    {
        printf("|%d",arr[i]);
    }
}

int main()
{
    printf("========== Interchange elements ==========\n");
	int arr[]={10,30,2,50,20};
	int arrSize=(sizeof(arr) / sizeof(arr[0]));
	printf("\nArray Elements\n");
	for(int i=0;i<arrSize;i++)
    {
        printf("|%d",arr[i]);
    }
   interChangeArray(arr,arrSize);
	printf("\n");
	return 0;
}
