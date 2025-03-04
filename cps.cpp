#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string cps(vector<string>&str)
{
    /*string s=str[0];
    string s1=str[str.size()-1];
    string ans=" ";
    int i=0;
    int j=0;
    while(i<s.size()&&j<s1.size())
    {
        if(s[i]==s1[j])
        {
            ans+=s[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;*/
    string s=str[0];
    int len=s.size();
    for(int i=1;i<str.size();i++)
    {
        int j=0;
        while(j<s.size()&&j<str[i].size()&&s[j]==str[i][j])
        {
            j++;
            len=min(len,j);
        }
    }
    string ans=s.substr(0,len);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0;i<str.size();i++)
    {
        cin>>str[i];
    }
    cout<<cps(str);
    return 0;
}