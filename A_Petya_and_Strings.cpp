// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int F = 0, S = 0;
    string f;
    string s;
    cin >> f;
    cin >> s;
    for (int i = 0; i < f.size(); i++)
    {
        f[i] = tolower(f[i]);
        s[i] = tolower(s[i]);
    }
    if(f==s)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0;i<f.size();i++)
        {
            if(f[i]>s[i])
            {
                cout<<"1"<<endl;
                break;
            }
            if(f[i]<s[i])
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    
    return 0;
}