//!ei program ta khubi tricky. Eta te bola hocche shohore koyta crime hocche. jodi input -1 hoy tar mane holo je shohore crime hocche. ar jodi input positive ashe tar mane holo shohore oi poriman police nijukto ache . crime ghotar somoy policer police thake tokhon crime hobe. Ar jodi police thake tahole crime hobe na, tobe police er sonka 1 kome jabe. karon ekjon police tar lifetime e shudhu 1 ta case solve korte parbe. 
//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    int t;
    cin>>t;
    int police = 0;
    int crime = 0;
    int x;
    while(t--)
    {
        cin>>x;
        if(x>0)
        {
            police+=x;
        }
        else
        {
           if(police<1)
           {
            crime++;
           }
           else
           police--;

        }
    } 
    cout<<crime<<endl;     
    
    return 0;
}