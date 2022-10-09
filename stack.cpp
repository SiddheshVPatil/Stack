#include <iostream>
#define MAX 5
using namespace std;

int a[100],n=100,top=-1;

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull()
{
    if(top+1==MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int x)
{
    if(!isFull())
    {
        top++;
        a[top]=x;
    }
    else
    {
        cout<<"stack is empty";
    }
}



int pop()
{
    int x;
    if(!isEmpty())
    {
        x=a[top];
        top--;

    }
    else
    {
        cout<<"stack is empty";
        return x;
    }
}

int peek()
{
    int x;
    if(!isEmpty())
    {
        x=a[top];
        return x;
    }
    else
    {
        cout<<"Stack is empty";
    }
}

void display()
{
    cout<<"_________"<<endl;
    cout<<"elements are"<<endl;
    if(!isEmpty())
    {
        for(int i=top;i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
    }
    else
    {
        cout<<"Stack is empty";
    }
}

int main()
{
    int ch,x;
    while(1)
    {
        cout<<"_____menu_____"<<endl;
        cout<<" 1.Push\n 2.pop\n 3.show top\n 4.display\n 5.exit"<<endl;
        cout<<"enter choise="<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter element to be push"<<endl;
                cin>>x;
                push(x);
                display();
                break;

            case 2:
                if(!isEmpty())
                {
                    x=pop();
                    cout<<"popped="<<x<<endl;
                }
                else{
                    cout<<"empty"<<endl;
                    break;
                }

            case 3:
                cout<<"top element="<<peek();
                break;
            
            case 4:
                display();
                break;
            
            case 5:
                cout<<"exit"<<endl;
                break;
            
            default:
                cout<<"invalid answer"<<endl;
                break;
                

        }
    }
    return 0;

}






























// int main(){
   

//     while(1)
//     {

//         cout<<"-----menu------";
//         cout<<" 1.Pust\n 2.pop\n 3.showtop\n 4.display\n 5.exit";

//         cout<<"enter your choise";
//         cin>>ch;

//         switch(ch)
//         {

//             case 1: cout<<"enter x";
//             cin>>x;
//             push(x);


//         }



//     }

// }