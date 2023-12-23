//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                cout<<j+1<<" ";
            }
        }
    }
    
    return 0;
}