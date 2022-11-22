#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head,*fresh,*ptr;
int c=0;
void getnode()
{
    fresh=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Your Data: ");
    scanf("%d",&fresh->data);
    fresh->next=NULL;
}
void display()
{
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nNo Node available\nInsert some Node first\n");
    }
    else
    {
        printf("\n================================================");
        printf("\nAvailable Nodes are....");
        printf("\nTotal Node is %d \n",c);
        while(ptr!=NULL)
        {
            printf("|%d| ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n================================================\n");
    }
}
/////////////////////////////////////////
void insertAtEnd()
{
    printf("\n~~~~~Insert Insert Element~~~~~\n");
    getnode();
    if(head==NULL)
    {
        head=fresh;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=fresh;
    }
    c++;
    printf("\nRecord Added...");
}
void insertAtBegin()
{
    printf("\n~~~~~ Insert In Begin ~~~~~\n");
    getnode();
    if(head==NULL)
    {
        head=fresh;
    }
    else
    {
        fresh->next=head;
        head=fresh;
    }
    c++;
    printf("\nRecord Added...");
}

void insertAtPos()
{
    printf("\n~~~~~Insert At Position~~~~~\n");
    int pdata;
    printf("\nEnter that node as Position ");
    scanf("%d",&pdata);
    ptr=head;
    while(ptr!=NULL)
        {
            if(ptr->data==pdata)
            {
                getnode();
                fresh->next=ptr->next;
                ptr->next=fresh;
                c++;
                printf("\nRecord Added...");
                //break;
                return;
            }
            ptr=ptr->next;
        }
    printf("Node not Found");

}
void deleteAtBegin()
{
    if(head==NULL)
    {
        printf("\nNothing for Delete...");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        c--;
        printf("\nRecord Deleted Successfully...");
    }
}

void deleteAtEnd()
{
    if(head==NULL)
    {
        printf("\nNothing for Delete...");
    }
    else
    {
        ptr=head;
        struct node *temp=head;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        if(c==1)
        {
            free(ptr);
            head=NULL;
        }
        else
        {
            temp->next=NULL;
            free(ptr);
        }
        c--;
        printf("\nRecord Deleted Successfully...");
    }

}

void deleteATPos()
{
    printf("\n~~~~~Delete At Position~~~~~\n");
    int pdata;
    printf("\nEnter that node as Position ");
    scanf("%d",&pdata);
    ptr=head;
    while(ptr!=NULL)
        {
            if(ptr->data==pdata&&ptr->next!=NULL)
            {
                struct node *temp=ptr->next->next;
                ptr->next=temp;
                c--;
                printf("\nNode Deleted...");
                return;
            }
            ptr=ptr->next;
        }
    printf("Node not Found after node %d",pdata);
}
void sort()
{
     struct node *current = head, *index = NULL;
        int temp;
        if(head == NULL) {
            return;
        }
        else {
            while(current != NULL) {
                index = current->next;

                while(index != NULL) {
                     if(current->data > index->data) {
                        temp = current->data;
                        current->data = index->data;
                        index->data = temp;
                    }
                    index = index->next;
                }
                current = current->next;
            }
        }
        printf("Element Sorted...");
        display();
}
void deleteAllList()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        free(head);
        head=temp;
    }
    if(head==NULL)
    {
        printf("\nAll deleted");
    }
}

//Main Start
int main()
{
    int option;
    head=NULL;
    do
    {
        printf("================Linear Linked List===============");
        printf("\n\tPress ( 1 ) for insert at End");
        printf("\n\tPress ( 2 ) for insert at Beginning");
        printf("\n\tPress ( 3 ) for insert at Position");
        printf("\n\tPress ( 4 ) for Delete at begin");
        printf("\n\tPress ( 5 ) for Delete at End");
        printf("\n\tPress ( 6 ) for Delete at Position");
        printf("\n\tPress ( 7 ) for Sort");
        printf("\n\tPress ( 8 ) for Display");
        printf("\n\tPress ( 9 ) for Delete Entire List");
        printf("\n\tPress ( 13 ) for Exit\n");
        printf("\n================================================");
        printf("\n\tEnter Your choice ");
        scanf("\n %d",&option);
        printf("\n");
        switch(option)
        {
        case 1:
            insertAtEnd();
            break;
        case 2:
            insertAtBegin();
            break;
        case 3:
            insertAtPos();
            break;
        case 4:
            deleteAtBegin();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            deleteATPos();
            break;
        case 7:
            sort();
            break;
        case 8:
            display();
            break;
        case 9:
            deleteAllList();
            break;
        case 13:
            printf("\nProgram Terminated Press any key to close console...\n");
            exit(0);
            break;
        default:
            printf("\n Wrong choice");
            break;
        }
        printf("\n\n================================================\n");
        printf("Press any key for next Menu \n");
        getch();
    }while(option!=12);
    return 0;
}
