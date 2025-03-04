#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template<class T>
class AddElements{
    public:
    T*arr;
int size;

AddElements(int  a)
{
 size=a;
 arr=new T[size];
}
T add(AddElements &e2)
{
 T d=0;
       for(int i=0;i<size;i++)
     {
       d+=this->arr[i] + e2.arr[i]; 
            
     }
       return d;
}
};
/*Write the class AddElements here*/

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
   // string type;
   // cin >> type;
    //if(type=="int") {
        int element1,element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2)<<endl;
    //}
  /* else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }*/
  }
  return 0;
}
/*3
string John Doe
int 1 2
float 4.0 1.5
Sample Output

JohnDoe
3
5.5*/
