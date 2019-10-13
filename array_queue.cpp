#include<iostream>

#define MAX 10

using namespace std;
int Qarr[MAX];
int front=-1;
int rear=-1;

int isEmpty()
{
    if(front==-1&& rear==-1)
    {
        return 1;
    }
    else
        return 0;
}

int isFull()
{
    if(rear==MAX-1)
    {
        return 1;
    }
    else
        return 0;
}

void EnQueue(int x)
{
    if(isFull()==1)
    {
        cout<<"Queue Overflow"<<endl;
    }
    if(isEmpty()==1)
    {
        rear=front=0;
    }
    else
        {
            rear=rear+1;
        }

    Qarr[rear]=x;
}

int DeQueue()
{
    if(isEmpty()==1)
    {
        cout<<"Queue Underflow";

    }

    else
        {
            return (Qarr[front++]);
        }

}

void showQueue()
{
    for(int i=front; i<rear;i++)
    {
        cout<<Qarr[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int qarr[MAX];

    EnQueue(5);
    EnQueue(8);
    EnQueue(9);
    EnQueue(7);
    EnQueue(5);
    EnQueue(8);
    EnQueue(9);
    EnQueue(7);
    EnQueue(8);
    EnQueue(9);
    EnQueue(7);
    showQueue();
    int x=DeQueue();
    cout<<"deleted value is"<<x<<endl;
    showQueue();

    return 0;
}
