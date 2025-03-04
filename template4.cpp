#include<iostream>
using namespace std;
// overloading function template
template<class T>
class Func{
    public:
    T data;
    Func(T a)
    {
        data=a;
    }
void display();
};
template <class T>
void Func<T>::display(){
    cout<<data;
}
void fun(int a)
{
    cout<<"this is simple"<<a<<endl;
}
template<class T>
void fun(T a)
{
cout<<"this is templized"<<a<<endl;
}
int main()
{
    Func<int>f(5);
    f.display();
    cout<<endl;
    fun(6);
    return 0;
}