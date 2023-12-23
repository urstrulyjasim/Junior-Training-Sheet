//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cout<<(char)('a'+(i%b));
    }       
    
    return 0;
}
 