//Created by Mahadev_devote
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); 
    ll tc;  cin>>tc;
    while(tc--)
     {
        ll a,b;
        cin>>a>>b;
        cout<<min(3*a,2*b)<<"\n";
     }
}