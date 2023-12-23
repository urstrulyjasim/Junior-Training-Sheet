//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
int minal(int a,int b)
{
    if(a>=b)
    {
        return b;
    }
    else if(b>a)
    {
        return a;
    }
}      
int maxal(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
}      
int main()
{
    int n;
    cin>>n;
    int a[n]    ;
    for(int i=0;i<n;i++)  
    {
        cin>>a[i];

    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int front,back;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mini = a[i+1]-a[i];
            maxi = a[n-1]-a[i];
        }
        else if(i>0 && i<n-1)
        {
            front = a[i+1]-a[i];
            back = a[i]-a[i-1];
            int minaa = minal(front,back);
            mini = minaa;
            front = a[n-1]-a[i];
            back = a[i]-a[0];
            int maxaa= maxal(front,back);
            maxi = maxaa;
        }
        else if(i==n-1)
        {
            mini=a[n-1]-a[n-2];
            maxi = a[n-1]-a[0];
        }

        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}