//given an string sort the string in alphabet form
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string sortstring(string str)
{
    vector<int>frequency(26,0);
    for(int i=0;i<str.length();i++)
    {
     int index=str[i]-'a';
     frequency[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++)
    {
while(frequency[i]--)
{
str[j++]=i+'a';
}
    }
    return str;
}
int main()
{
    string str;
    cin>>str;
    cout<<sortstring(str);

    return 0;
}