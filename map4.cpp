#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
   unordered_map<int,string>fruits;
   fruits.insert(pair<int,string>{3,"banana"});
    fruits.insert(pair<int,string>{2,"carry"});
    fruits.insert(pair<int,string>{1,"apple"});
    
    for(auto pair:fruits)
    {
        cout<<pair.first<<"="<<pair.second<<endl;
    }
    system("pause>0");
    return 0;
}