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
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }  
     
    int count=0;
    if(n<3)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else{
        for(int i=1;i<n-1;i++)
        {
            if(b[i]>a[0] && b[i]<b[n-1])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}