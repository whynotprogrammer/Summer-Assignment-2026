#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int firstUniqChar(string s) {
       unordered_map<char,int> m;
       for(int i=0;i<s.size();i++)
       {
        m[s[i]]++;
       } 
       for(int i=0;i<s.size();i++)
       {
        if(m[s[i]]==1)
        {
            return i;
            break;
        }
       }
       return -1;
    }

    int main()
{
    string s,t;
    cin>>s;
    int answer = firstUniqChar(s);
    cout<<answer;

}