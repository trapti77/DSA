#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;  
    int a;
    cin>>a;
    int i;
     for( i=0;i<a;i++)
     {
        int ele;
        cin>>ele;
        v.push_back(ele);
         
     }
     int q,p,w;
     cin>>q;
     v.erase(v.begin()+q);
     cin>>p>>w;
     v.erase(v.begin()+p,v.begin()+w);
     cout<<v.size()<<endl;
     for(i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
     
    return 0;
    
}

    
   