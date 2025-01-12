#include<stdio.h>
#define SIZE 10
void push(int);
void pop();
void display();
void exit();
int k[SIZE],top=-1;

void main()
{
    int value,choice;
    while (1)
    {
     printf("\n\n**** MENUE *****\n");
     printf("\n1.push\n2.pop\n3.display\n4.Exit ");
     printf("Enter your choice");
     scanf("%d",&choice);
     

     switch (choice)
     {
        case 1: printf("Enter value to be insert :");
                scanf("%d",&value);
                push(value);
                break;

        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: printf("\nWrong selection!!! Try again!!");
      } 
    }
    
}
void push(int value)
{
    if (top==SIZE-1)
    printf("\nk is full !!! Insertion is not possible");
    else
    {
        top++;
        k[top]=value;
        printf("\n Insertion success!!!");

    }
    
}
void pop()
{
    if(top==-1)
    printf("\nk is empty!!! Deletion is not possible!!");
    else
    {
        printf("\n Deleted: %d",k[top]);
        top--;

    }
}
void display()
{
    if(top==-1)
    printf("\nk is Empty");
    else{
        int i;
        printf("\n k element are:\n");
        for(i=top; i>=0; i--)
        printf("%d\n",k[i]);
    }
}