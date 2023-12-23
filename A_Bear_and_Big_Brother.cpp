//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    while(a<=b)
    {
        c += 1;
        a = 3*a;
        b = 2*b;
    }  
    cout<<c<<endl;    
    
    return 0;
}