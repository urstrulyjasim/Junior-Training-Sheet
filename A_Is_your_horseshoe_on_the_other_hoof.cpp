//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int n=4,c=0,max=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0;i<n-1;i++)
    {
       if(a[i]==a[i+1])
       {
        c++;
       }
    }
    cout<<c;
    return 0;
}