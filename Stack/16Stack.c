#include <stdio.h>

int MAXSIZE = 10;
int stack1[5];
int stack2[5];
int top1 = -1;
int top2 = -1;

int push1(int data)
{
    if (top1 == 5 - 1)
    {
        printf("Stack is Overflow:");
    }
    else
    {
        top1++;
        stack1[top1] = data;
    }
}

int push2(int data)
{
    if (top2 == 5 - 1)
    {
        printf("Stack is Overflow:");
    }
    else
    {
        top2++;
        stack2[top2] = data;
    }
}

void display(int arr[], int top)
{
    printf("\n");
    int i;
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {

        printf("Stack element is:");
        for (i = top; i >= 0; i--)
            printf("%d ", arr[i]);
    }
}

void compareStack(int arr1[], int arr2[])
{
    if (top1 == top2)
    {
        int i = top1;
        int flag = 1;
        while (i >= 0)
        {
            if (stack1[i] != stack2[i])
            {
                flag = 0;
            }
            i--;
        }
        if (flag)
            printf("Stack is Same");
        else
            printf("Stack is Not Same");
    }
    else
        printf("\nBoth Stack is Not Same");
}

int main()
{
    push1(3);
    push1(5);
    push1(9);
    push1(15);

    push2(3);
    push2(5);
    push2(9);
    push2(15);

    compareStack(stack1, stack2);
    display(stack1, top1);
    display(stack2, top2);
    return 0;
}
