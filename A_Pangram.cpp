//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int n;
    int count=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if(count==26)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}