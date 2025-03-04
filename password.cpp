#include <iostream>
using namespace std;
bool solve(string s)
{
    if (s.find(" ") !=
        std::string::npos)
        return false; 
 
    if (true)
    { 
        int count = 0; 
 
        // Check digits from 0 to 9 
        for(int i = 0; i <= 9; i++)
        { 
             
            // To convert int to string 
            string str1 = to_string(i); 
  if (s.find(str1) != 
                std::string::npos) 
                count = 1; 
        } 
        if (count == 0) 
            return false; 
    }
    if (true)
    { 
        int count = 0; 
 
        // Checking capital letters 
        for(int i = 65; i <= 90; i++) 
        { 
             
            // Type casting 
            char c = (char)i;
            string str1(1, c);
             
            if (s.find(str1) !=
                std::string::npos) 
                count = 1; 
        } 
        if (count == 0) 
            return false; 
    } 
 
    if (true)
    { 
        int count = 0; 
 
        // Checking small letters 
        for(int i = 97; i <= 122; i++)
        { 
            char c = (char)i; 
            string str1(1, c); 
 
            if (s.find(str1) != 
                std::string::npos)
                count = 1;
        } 
        if (count == 0) 
            return false;
    } 
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        bool ans=solve(str);
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	//code
    return 0;
}