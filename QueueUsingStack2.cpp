#include <iostream> 
using namespace std;
int stk1[1000], stk2[1000],n;
int top1 = -1, top2 = -1;
void stack1_push(int data);
int stack1_pop();
void stack2_push(int x);
int stack2_pop();
void QueueInsert();
int QueueDelete();
void display();

int main()
{
       cout << "Enter Size of Queue:";
    cin >> n;
    cout<<"!Warning! The size of the Queue is now "<<n<<" Only"<<endl;
    cout << "\n\n\t\t\t-------------------Queue Using Stack Menu-------------------------";
    cout << "\n\t\t\t\t1).Insert element in the Queue";
    cout << "\n\t\t\t\t2).Delete element from the Queue";
    cout << "\n\t\t\t\t3).Display element in the Queue";
    cout << "\n\t\t\t\t4).Enter 0 to Exit the Menu";

    int ch;
    while (ch != 0)
    {
        cout << endl
             << "Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            QueueInsert();
        }
            break;
        case 2:
            QueueDelete();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Invalid";
        }
    }
    return 0;
}
void stack1_push(int data)
{


    {
        top1++;
        stk1[top1] = data;
    }
}
int stack1_pop()
{


    {
        int a = stk1[top1];
        top1--;
        return a;
    }
}

void stack2_push(int x)
{

    {
        top2++;
        stk2[top2] = x;
    }
}

int stack2_pop()
{
    int p = stk2[top2];
    top2--;
    return p;
}
void QueueInsert()
{
     if (top1 == n - 1)
        cout << "!Queue Overflow";
        else{
  
    while (top1 != -1)
    {
        stack2_push(stack1_pop());
    }
    int e;
            cout<<"Enter an element:";
            cin>>e;
            cout<<e<<" inserted into Queue";
    stack1_push(e);
    while (top2 != -1)
    {
        stack1_push(stack2_pop());
    }
        }
}

int QueueDelete()
{
    if (top1 == -1 && top2 == -1)
        cout << "Queue Underflow!";
    else
    {
        cout<<stk1[top1]<<" deleted from Queue";
    int d = stk1[top1];
    top1--;
    return d;
    }
}

void display()
{
    if (top1 == -1 && top2 == -1)
    {
        cout << "Queue is empty now!";
    }
    else
    {
        cout<<"------------------------------------------------------"<<endl;
        cout<<"Queue Elements:";
        for (int i = top1; i >= 0; i--)
        {
            cout << stk1[i] << " ";
        }
        cout<<endl<<"---------------------------------------------------";
    }
}