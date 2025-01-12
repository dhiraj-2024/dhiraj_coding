

#include<iostream>
using namespace std;


#define size 5

int front =-1;
int rear =-1;

void insertq (int[],int);
void deleteq (int[]);
void display (int[]);

int main()
{

int n,ch;
int queue[size];


do
{
    cout<<"\n circular queue : \n1.Insert\n2.Delete\n3.Display\n4.Exit";
    cout<<"Enter choice 0-3?";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"enter number:"<<endl;
        cin>>n;
        insertq(queue, n);
        break;

        case 2:
        deleteq(queue);
        break;
        case 3:
        display(queue);
        break;
    }
}while(ch!=4);
}

void insertq(int queue[], int item)
{
 
    // if((front==0&&rear==size-1) || (front==rear=1))
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        cout<<"queue is full:";
        // return;

    }
    else if (rear==-1)
    {
        rear++;
        front++;

    }
    else if(rear== size - 1 && front > 0)
    {
        rear=0;
    }
    else
    {
        rear++;

    }
    queue[rear] = item;
}
 
 void display(int queue[])
 {
    int i; 
    cout<<"\n";
    if(front>rear)
    {
        for ( i = front; i < size; i++)
        {
            cout<<"quequ[i]";
        }
        for(i=0; i<=rear; i++)
        {
            cout<<"queuq[i]";

        }
    }
    
    else
    {
    for(i=front; i<=rear; i++)
    {
       cout<<"queue[i]";

    }


    }
    
 }

 void deleteq(int queue[]) 
 {
    if(front==-1)
    {
        cout<<"Queue is empty";

    }
    else if(front==rear)
    {
       // cout<<"deleted",queue[front];
          cout << "\n" << queue[front] << " deleted" << endl;
        front=-1;
        rear=-1;

    }
    else
    {
              //  cout<<"deleted",queue[front];
                cout << "\n" << queue[front] << " deleted" << endl;
                front++;
    }
}


 /*
#include <iostream>
#define size 5
using namespace std;

void insertq(int[], int);
void deleteq(int[]);
void display(int[]);

int front = -1;
int rear = -1;

int main() {
    int n, ch;
    int queue[size];
    do {
        cout << "\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit";
        cout << "\nEnter Choice 0-3? : ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "\nEnter number: ";
                cin >> n;
                insertq(queue, n);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
        }
    } while (ch != 0);
}

void insertq(int queue[], int item) 
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) 
    {
        cout << "Queue is full" << endl;
        return;
    } else if (rear == -1)
    {
        rear++;
        front++;
    } else if (rear == size - 1 && front > 0) 
    {
        rear = 0;
    } else
    {
        rear++;
    }
    queue[rear] = item;
}

void display(int queue[]) 
{
    int i;
    cout << "\n";
    if (front > rear)
     {
        for (i = front; i < size; i++) 
        {
            cout << queue[i] << " ";
        }
        for (i = 0; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    } else {
        for (i = front; i <= rear; i++) 
        {
            cout << queue[i] << " ";
        }
    }
    cout << endl;
}

void deleteq(int queue[])
 {
    if (front == -1) 
    {
        cout << "Queue is empty" << endl;
    } else if (front == rear)
     {
        cout << "\n" << queue[front] << " deleted" << endl;
        front = -1;
        rear = -1;
    } else 
    {
        cout << "\n" << queue[front] << " deleted" << endl;
        front++;
    }
}
*/