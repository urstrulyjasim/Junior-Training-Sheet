//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        string s;
        cin>>s;
        if(s.length()<=10)
        {
            cout<<s<<endl;
        }
        else if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }      
    
    return 0;
}