//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        sum += a;
        if(sum % 10==0 || sum%10==3)
        {
            cout<<i<<endl;
            break;
        }
        else 
            continue;
    }      
    
    return 0;
}