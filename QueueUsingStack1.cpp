#include <iostream>
using namespace std;
int stk1[1000], stk2[1000], n, top1 = -1, top2 = -1, count = 0;
void stack1_push(int a);
int stack1_pop();
void stack2_push(int a);
int stack2_pop();
void queue_insert();
void queue_delete();
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
        cout <<"\nChoice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            queue_insert();
            break;
        case 2:
            queue_delete();
            break;
        case 3:
            display();
            break;
        case 0:
        {
            cout<<"Exited From Queue Menu....";
            exit(0);
        }
        break;
        default:
        {
            cout << "Invalid";
        }
        }
    }
    return 0;
}
void stack1_push(int data)
{
    if (top1 == n - 1)
        cout << "!Overflow";
    else
    {
        top1++;
        stk1[top1] = data;
    }
}
int stack1_pop()
{
    if (top1 == -1)
        cout << "underflow!";
    else
    {
        int p = stk1[top1];
        top1--;
        return p;
    }
}
void stack2_push(int data)
{
    if (top2 == n - 1)
        cout << "Overflow!";
    else
    {
        top2++;
        stk2[top2] = data;
    }
}
int stack2_pop()
{
    if (top2 == -1)
        cout << "underflow!";
    else
    {
        int p = stk2[top2];
        top2--;
        return p;
    }
}
void queue_insert()
{
     if (top1 == n - 1)
        cout << "!Queue Overflow";
        else{
    int e;
    cout << "Enter an element:";
    cin >> e;
    cout << e << " inserted into Queue";
    stack1_push(e);
    count++;
        }
}
void queue_delete()
{
    if (top1 == -1 && top2 == -1)
        cout << "Queue Underflow!";
    else
    {
        for (int i = 0; i < count; i++)
        {
            int x = stack1_pop();
            stack2_push(x);
        }
        int b = stack2_pop();
        cout << b << " deleted from queue";
        cout << endl;
        count--;
        for (int i = 0; i < count; i++)
        {
            int y = stack2_pop();
            stack1_push(y);
        }
    }
}
void display()
{
    if (top1 == -1 && top2 == -1)
        cout << "Queue is empty currently";
    else
    {
        cout << "------------------------------------------" << endl;
        cout << "Queue Elements:";
        for (int i = 0; i <= top1; i++)
        {
            cout << stk1[i] << " ";
        }
        cout << endl
             << "--------------------------------------------" << endl;
    }
}