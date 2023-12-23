// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ss = 0, sd = 0, j, z = 0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    } // 1 2 3 4 5 6 7
    // for(int i=0;i<t;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int arr[t];
    for (int i = t - 1, j = 0; j < t, i >= 0; j++, i--)
    {
        arr[j] = a[i];
    }
    // for (int i = 0; i < t; i++)
    // {
    //     cout << arr[i] << " ";
    //     /* code */
    // }

    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
        {
            ss += arr[i];
        }
        else
            sd += arr[i];
    }

    cout << ss << " " << sd << endl;

    return 0;
}