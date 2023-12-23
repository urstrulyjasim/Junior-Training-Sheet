//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int n;
    cin>>n;
    string c;
    cin>>c;
    int a = 0 , d = 0;
    for(int i=0;i<c.size();i++)      
    {
        if(c[i]=='A')
        {
            a++;
        }
        if(c[i]=='D')
        {
            d++;
        }

    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a==d)
    {
        cout<<"Friendship"<<endl;
    }
    
    return 0;
}
