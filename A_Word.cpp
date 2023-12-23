//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int u=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {   
        if(s[i]>=65 && s[i]<=90)
        {
            u++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            l++;
        }
    }      
    if(u>l)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else if(l>=u)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;

       
    return 0;
}