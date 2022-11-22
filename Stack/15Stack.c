#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    char info[1000];   // character array to store names
    struct node *next; // pointer to structure to store address of next node
} node;

// pushing elements into the stack
void push(node **t, char data[])
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        // if node is not able to allocate in memory
        printf("Not enough memory\n");
    }
    else
    {
        // storing the names in the stack
        for (int i = 0; i < data[i] != '\0'; i++)
            temp->info[i] = data[i];
        temp->info[strlen(data)] = '\0';
        if (*t == NULL)
        {
            *t = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = *t;
            *t = temp;
        }
    }
}
// popping the name on top of stack
void pop(node **t)
{

    printf("Name popped %s\n", (*t)->info);
    node *temp = *t;
    *t = (*t)->next;
    free(temp);
}
// displaying the names in the stack in top to down manner

void display(node *t)
{
    if (t == NULL)
        printf("Stack is empty\n");
    else
    {
        while (t != NULL)
        {
            printf("%s\n", t->info);
            t = t->next;
        }
    }
}

void main()
{
    int n;
    char ch;
    int choice;
    char name[100];
    node *top = NULL;
    do
    {

        printf("Press 1 to store name into the stack 2 to pop the topmost name in stack\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter name of student to be stored in stack\n");
            fflush(stdin);
            scanf("%s", &name);
            push(&top, name);
        }
        else if (choice == 2)
        {
            if (top != NULL)
                pop(&top);
            else // if there are no items in the stack nothing can be popped
                printf("Stack is empty\n");
        }
        else // if the user chooses a wrong option
            printf("Wrong choice\n");

        printf("Do you want to continue?\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');

    // displaying the names in stack

    printf("\nNames stored in stack are:\n");
    display(top);
}
