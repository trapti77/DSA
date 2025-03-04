#include<iostream>
#include<Stack>
using namespace std;
class Stack
{
    public :
int *arr;
int top;
int size;
Stack(int size)
{
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int ele)
{
    if(size-top>1)
    {
      top++;
      arr[top]==ele; 
    }
    else{
        cout<<"stack is overflow"<<endl;
    }
}
    void pop()
    {
      if(top>=0)
      {
        top--;
      }
      else{
        cout<<"stack is empty"<<endl;
      }
    }
      int  peek()
      {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
      }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    
  Stack st(5);
st.push(23);
st.push(24);
st.push(25);
st.push(26);
st.push(27);
cout<<st.peek()<<endl;
}

