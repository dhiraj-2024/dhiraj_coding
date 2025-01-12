#include<iostream>

#include<stdio.h>
using namespace std;

int stack[20]; //declare array stack
int top =-1;

void push(int x)//push integers in stack
{
stack[++top]=x;
}
int pop()//pop elements from stack
{
   return stack[top--];

}
int main()
{
    char exp[20]; //Declares a character array called exp to store the postfix expression entered by the user
    char *e;//will be used to traverse the exp array
    int n1,n2,n3,num;//to store operands, results, and temporary values during the evaluation of the postfix expression
    cout<<"Enter the expression :";
    cin>>exp;
    e=exp;//Initialize the pointer e

    while(*e !='\0')
    {
        if(isdigit(*e))
        {
            num=*e-48;
            push(num);

        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*e)
            {
                case '+':
                {
                    n3=n1+n2;
                    break;
                }
                case '-':
                {
                    n3=n2-n1;
                    break;
                }
                case '*':
                {
                    n3=n1*n2;
                    break;
                }
                case '/':
                {
                    n3=n2/n1;
                    break;
                }
            }
            push(n3);
        }
        e++;
    }
    cout<<"The result of expression = "<<exp<<pop();
    return 0;
}
