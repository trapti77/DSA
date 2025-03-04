//NORMAL QUEUE PROGRAM
#include<iostream>
#include<queue>
using namespace std;
void printqueue(queue<int>queue)
{
while(!queue.empty())
{
cout<<queue.front()<<" ";
queue.pop();
}
}
int main()
{
    queue<int>q;
    q.push(21);
    q.push(22);
    q.push(23);
    q.push(24);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    cout<<"my queue is:"<<endl;
   printqueue(q);
}