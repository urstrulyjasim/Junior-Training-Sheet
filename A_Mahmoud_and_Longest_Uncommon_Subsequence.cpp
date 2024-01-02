<<<<<<< HEAD
//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
int  maxi(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
}      
int  mini(int x,int y)
{
    if(x>y)
    return y;
    else 
    return x;
}      
int main()
{
    string a;
    string b;
    int count=0;
    cin>>a;
    cin>>b;
    for(int i = 0;i<a.size();i++)
    {
        for(int j =0;j<b.size();j++)
        {
            if(b[j]==a[i] && b[j+1]==a[i+1])
            {
                count++;
                
            }
        }
    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<<max(a.size(),b.size())<<endl;
    }
    return 0;
=======
//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
int  maxi(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
}      
int  mini(int x,int y)
{
    if(x>y)
    return y;
    else 
    return x;
}      
int main()
{
    string a;
    string b;
    int count=0;
    cin>>a;
    cin>>b;
    for(int i = 0;i<a.size();i++)
    {
        for(int j =0;j<b.size();j++)
        {
            if(b[j]==a[i] && b[j+1]==a[i+1])
            {
                count++;
                
            }
        }
    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<<max(a.size(),b.size())<<endl;
    }
    return 0;
>>>>>>> 5d1e6ce4f6d58b934aaac734fec8107574545930
}