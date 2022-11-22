//7.	Write a program to insert a number in an array that is already sorted in ascending order.

#include <stdio.h>

int insertSorted(int arr[], int s, int data)
{

    int i;
    for (i = s - 1; (i >= 0 && arr[i] > data); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = data;

    return (s + 1);
}

int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int s = 6;
    int i, data;
    printf("Enter data for Insert: ");
    scanf("%d",&data);

    printf("\nBefore Insertion: ");
    for (i = 0; i < s; i++)
        printf("%d  ", arr[i]);

    s = insertSorted(arr, s, data);

    printf("\nAfter Insertion: ");
    for (i = 0; i < s; i++)
        printf("%d  ", arr[i]);

    return 0;
}
