#include<iostream>
#define n 8
using namespace std;
int queue[n],front=-1,rear=-1;
void insertion()     
{
    if(rear==n-1)
    cout<<"Queue overflow";
    else
    {
        int e;
        if(front==-1)
        {
        front++;
        }
        cout<<"Enter an element:";
        cin>>e;
        rear++;
        queue[rear]=e;
        cout<<e<<" inserted into Queue";
    }
}
void deletion()
{
    if(front==-1||front>rear)
    cout<<"Queue underflow";
    else
    cout<<queue[front]<<" deleted from Queue";
    front++;
}
void display()
{
    if(front>=0 )
    {
        cout<<"------------------------"<<endl;
        cout<<"Queue elements:";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl<<"------------------------"<<endl;
    }
    else
    {
        cout<<"Queue is currently empty!";
    }
}
int main()
{
    int ch;
    cout<<"\n\n\t----------------------Queue Menu------------";
    cout<<"\n\t\t1).Enqueue";
    cout<<"\n\t\t2).Dequeue";
    cout<<"\n\t\t3).Display";
    cout<<"\n\t\t4).Press 0 to exit";
    while(ch!=0)
    {
        cout<<"\nEnter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            case 0:
            {
                cout<<"Exited from Queue menu";
                exit(0);
                
             }
             break;
             default:
             cout<<"Invalid response!";
        }
    }
    return 0;
}
