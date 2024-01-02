//بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include<bits/stdc++.h>
using namespace std;
       
int main()
{
    char LR;
    cin>>LR;
    int index;
    string value="qwertyuiopasdfghjkl;zxcvbnm,./" ;     
    string input;
    cin>>input;
    for(int i=0;i<input.size();i++)
    {
        for(int j=0;j<value.size();j++)
        {
            if(input[i]==value[j])
            {
                index=j;
            }
        }
        if(LR=='R')
        {
            cout<<value[index-1];
        }
        else if(LR=='L')
        {
            cout<<value[index+1];
        }
    }
    return 0;
}