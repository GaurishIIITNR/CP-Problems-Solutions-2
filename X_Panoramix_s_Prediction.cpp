/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:22:54:31****** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;
    ll arr[] = { 2,
                 3,
                 5,
                 7,
                 11,
                 13,
                 17,
                 19,
                 23,
                 29,
                 31,
                 37,
                 41,
                 43,
                 47,
                 53 };
                  while (t--)
    {
        ll a, b;
        cin >> a >> b;
        for (ll i = 0; i < 16; i++)
        {
            if (arr[i] == a)
            {
                if (arr[i + 1] == b)
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
        }
    }
}
