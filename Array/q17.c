//17.	Write a program to read two floating point number arrays.
//Merge the two arrays and display the resultant array in reverse order.

#include<stdio.h>

int main()
{
    printf("========== Merge Two sorted Array ==========\n");
	float arr1[5];
	float arr2[5];
	float mergeA[10];

	printf("Enter First Array\n");
	for(int i=0;i<5;i++)
    {
        printf("%d Element:",i+1);
        scanf("%f",&arr1[i]);
    }

    printf("\nEnter Second Array\n");
	for(int i=0;i<5;i++)
    {
        printf("%d Element:",i+1);
        scanf("%f",&arr2[i]);
    }

    printf("\nArray 1 Elements\n");
	for(int i=0;i<5;i++)
    {
        printf("| %.2f ",arr1[i]);
    }

    printf("\nArray 2 Elements\n");
	for(int i=0;i<5;i++)
    {
        printf("| %.2f ",arr2[i]);
    }
    //Merging logic
    int k=0;
    for(int i=0;i<10;i++)
    {
        if(i<5)
        {
            mergeA[i]=arr1[i];
        }
        else
        {
            mergeA[i]=arr2[k];
            k++;
        }
    }

    printf("\n\nMerged Array\n");
	for(int i=9;i>=0;i--)
    {
        printf("|%.2f ",mergeA[i]);
    }
	printf("\n");
	return 0;
}
