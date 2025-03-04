#include<iostream>
using namespace std;
template<class T1,class T2>
class Data{
    public:
    T1 data1;
    T2 data2;
    Data(T1 a,T2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<data1+data2;
    }
};
int main()
{
    int x;
    cin>>x;
    float y;
    cin>>y;
    Data<int ,float>obj(x,y);
    obj.display();
    return 0;
}