#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(auto i:s)
        {
            m1[i]++;
        }
        for(auto j:t)
        {
            m2[j]++;
        }
        if(s.size()!=t.size())
        {
            return false;
        }
        else if(m1==m2)
        {
            return true;
        }
        else 
        {
            return  false;
        }
    }
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    bool answer = isAnagram(s,t);
    if(answer==true)
    cout<<"true";
    else
    cout<<"false";
}
