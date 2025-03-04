#include<iostream>
using namespace std;
//default parameter template
template<class T1=int,class T2=string,class T3=float>
class Result{
public:
T1 rollno;
T2 name;
T3 marks;
Result(T1 a,T2 b,T3 c)
{
    rollno=a;
    name=b;
    marks=c;
}
void display()
{
    cout<<"rollno:"<<rollno<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"marks:"<<marks<<endl;
}
}; 
int main()
{
    //Result<float,int,char>r(9.1,4,'t);
    //also we can take input using cin
     Result<>r(58,"trapti",9.1);
     r.display();
    return 0;
}