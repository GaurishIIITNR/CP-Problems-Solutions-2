//🚩HHM🚩
// DATE: 27-05-2022
// TIME:22:53:33

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)         \
   cout << #v << ": ";  \
   for (auto x : v)     \
   {                    \
      cout << x << " "; \
   }                    \
   cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

int hhm(string s, ll n, ll cnt)
{
   ll i, j, k;
   if (n == -1)
      return cnt;
   if (s[n] == 'U' || s[n] == 'O' || s[n] == 'I' || s[n] == 'E' || s[n] == 'A' || s[n] == 'a' || s[n] == 'o' || s[n] == 'i' || s[n] == 'e' || s[n] == 'u')
      cnt++;
   return hhm(s, n - 1, cnt);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   // ll t=1;
   string s;
   getline(cin, s);

   //  while(t--)
   //  {
   cout << hhm(s, s.length() - 1, 0);
   //  }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
