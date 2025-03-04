//GIVEN TWO STRING RETURN TRUE IF AN STRING IS ANAGRAM OTHERWISE RETURN FALSE
//INPUT->   str1="anagram"   str2="nagaram";   OUTPUT->  yes
//INPUT->   str1="bank"    str2="atm"         OUTPUT-> no
// anagram-> it is a rearranging to get another word;
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string str1,string str2)
{
    //create freq array

    vector<int>freq(26,0);
    //if length of both strings are not match then sit false and the return 
    if(str1.length()!=str2.length())
    {
        return false;
    }
    //store freq of characters
    for(int i=0;i<str1.length();i++)
    {
        
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
   /* int j=0;
    for(int i=0;i<26;i++)
    {
    while(freq[i]--)
    {
      str1[j++]=i+'a';  
    }
    while(freq2[i]--)
    {
        str2[j++]=i+'a';
    }
    }*/
    for(int i=0;i<str1.length();i++)
    {
    if(freq[i]!=0)
    {
return false;
    }
    else{
        return true;
    }
    }
}
int main()
{
    string  str1,str2;
    cin>>str1>>str2;
    if(isAnagram(str1,str2))
    {
        cout<<"strings are anagram"<<endl;
    }
    else{
        cout<<"strings are not anagram"<<endl;
    }
    return 0;
}
//TIME COMPLEXITY=O(length of string )  which is o(n);  
//SPACE COMPLEXITY=O(26) which constant