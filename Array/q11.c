//11.	Write a program to merge two sorted arrays.

#include<stdio.h>

int * mergeArray(int arr1[],int arr2[],int arr1Size,int arrMergeSize)
{
    static int mergeA[20];
    int k=0;
    for(int i=0;i<arrMergeSize;i++)
    {
        if(i<arr1Size)
        {
            mergeA[i]=arr1[i];
        }
        else
        {
            mergeA[i]=arr2[k];
            k++;
        }
    }

    return mergeA;
}

int main()
{
    printf("========== Merge Two sorted Array ==========\n");
	int arr1[]={10,20,30,40};
	int arr2[]={90,120,150,130};
	int mergeArr[30];
	int *baseAddress;
	printf("\nArray 1 Elements\n");

	for(int i=0;i<sizeof(arr1) / sizeof(arr1[0]);i++)
    {
        printf("| %d ",arr1[i]);
    }
    printf("\nArray 2 Elements\n");
	for(int i=0;i<sizeof(arr2) / sizeof(arr2[0]);i++)
    {
        printf("| %d ",arr2[i]);
    }

    printf("\nMerged Array\n");
    int mergeSize=(sizeof(arr1) / sizeof(arr1[0]))+(sizeof(arr2) / sizeof(arr2[0]));
    baseAddress=mergeArray(arr1,arr2,sizeof(arr1) / sizeof(arr1[0]),mergeSize);
	for(int i=0;i<mergeSize;i++)
    {
        printf("|%d ",*(baseAddress+i));
    }
	printf("\n");
	return 0;
}
