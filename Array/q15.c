//15.	Write a program to interchange the second element with the second last element.

#include<stdio.h>

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
   int a=arr[arrSize-2];
    arr[arrSize-2]=arr[1];
    arr[1]=a;

   printf("\nElements After Interchange Small to Large\n");
    for(int i=0;i<arrSize;i++)
    {
        printf("|%d",arr[i]);
    }
	printf("\n");
	return 0;
}
