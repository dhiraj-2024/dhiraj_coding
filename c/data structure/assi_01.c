#include<stdio.h>
#define SIZE 10

//stack operation like push pop peek etc;
void push(int);
void pop();
void display();
void exit();
int stack[SIZE],top=-1;

int main()
{
    int value,choice;
    while (1)
{
        printf("\n*****MENEU*****\n");
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("\nenter your choice ");
        scanf("%d",&choice);

    
    switch (choice)
    {
    case 1:
        
        printf("enter the value to be inserted");
        scanf("%d",&value);
        push(value);
        break;

    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(0);

    default:
    printf("wrong selection try it again");
        break;
    }
 }
    
}

void push(int value)
{

    if(top==SIZE-1)
    
        printf("stack is full\n");

    
    else{
        top++;
        stack[top]=value;
        printf("insertion successful");
    }
}

void pop()
{
    if(top==-1)
    
        printf("stack is empty");
    
    else{
        
        printf("%d",stack[top]);
        top--;
    }
}

void display()
{
    if(top==-1)
    
        printf("stack is empty");

    
    else
    {
        int i;
        printf("stack elements are\n");
        for(i=top; i>=0; i--)
        printf("%d",stack[i]);
    }

}