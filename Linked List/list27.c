#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
int count=0;
struct node *prevnode;
struct node *currentnode,*temp;
struct node *nextnode,*head;
struct node *newnode;
void createnode();
void display();
void reverse();
void main()
{
int exit=1;
do
{
    int choice;
    printf("Enter choice");
printf(" 1. create node \n 2. display \n 3. reverse \n 4. exit");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    {
        createnode();
    }
    break;
    case 2:
    {
        display();
    }
    break;
    case 3:
    {
        reverse();
    }
    break;
    case  4:
    {
        exit=0;

    }
    break;
    default :
    printf("Invalid choice");
}
}while(exit);
}
void createnode()
{
    int x;
    printf("Enter num u wannna insert");
    scanf("%d",&x);
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=x;
   newnode->next=0;
 if(head==0)
 head=temp=newnode;
 else
 {
temp->next=newnode;
temp=newnode;
 }
   
}
void display()
{
    
    temp=head;
    while(temp!=0)
    {
        printf("\n data is %d",temp->data);
        temp=temp->next;
        count++;
    }
    printf("count = %d",count);
}
   void reverse()
{

    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}
