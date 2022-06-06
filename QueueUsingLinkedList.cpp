#include<iostream>
using namespace std;
struct node{
    int element;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void Queue_Insert()
{
    int e;
    struct node *temp;
    temp=new node;
    cout<<"Enter an element:";
    cin>>e;
    temp->element=e;
    temp->next=NULL;
    if(front==NULL)
    {
        front=rear=temp;
        cout<<e<<" inserted into Queue";
    }
else
{
    rear->next=temp;
    rear=temp;
    cout<<e<<" inserted into Queue";
}
}
void Queue_Delete()
{
        struct node *temp;
    temp=new node;
    if(front==NULL)
    {
        cout<<"Queue Underflow!";
    }
    else
    {
        temp=front;
        cout<<temp->element<<" deleted from Queue";
        front=front->next;
        delete(temp);
    }
}
void display()
{
        struct node *temp;
    temp=new node;
    if(front==NULL)
    {
        cout<<"Queue is empty now!";
    }
    else
    {
       temp=front;
       cout<<"--------------------------------------------------------------"<<endl;
       cout<<"Queue Elements:";
       while(temp!=NULL)
       {
           cout<<temp->element<<" ";
           temp=temp->next;
       }
       cout<<endl<<"---------------------------------------------------------"<<endl;
    }
}
int main()
{
    int ch;
    cout<<"\n\n\n\t\t\t-------------------Queue Menu-------------------";
    cout<<"\n\n\t\t\t\t\t1)Enqueue Elements";
    cout<<"\n\n\t\t\t\t\t2)Dequeue Elements";
    cout<<"\n\n\t\t\t\t\t3)Display Queue";
    cout<<"\n\n\t\t\t\t\t4)Enter 0 exit";
    while(ch!=0)
    {
        cout<<"\nMake Your Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            Queue_Insert();
            break;
            case 2:
            Queue_Delete();
            break;
            case 3:
            display();
            break;
            case 0:
            {
                cout<<"Exited From menu....";
                exit(0);
            }
            break;
            default:
            cout<<"Invalid Response";
        }
    }
}