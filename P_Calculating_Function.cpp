/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:23:20:30****** //
========================================================================================
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
     
    while(t--) 
    {
        ll a;
        cin>>a;
        if(a%2)
        cout<<(a/2)-a;  
        else
        cout<<a/2;
    }
}
