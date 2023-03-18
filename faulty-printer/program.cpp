// Mahesh Sharma
// Beauty is in the struggle!
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define ford(i, a, b, c)        for(int i=(a); i<(b); i+=(c))
#define fori(i, a, b)           ford(i,a,b,1)
#define rep(i, n)               fori(i,0,n)
#define ifor(i, a, b)           for(int i=(a); i>=(b); i--)
#define si(x)                   ((int)x.size())
#define SS                      ({int x;cin>>x;x;})
#define SL                      ({long long x;cin>>x;x;})
#define pb                      push_back
#define mp                      make_pair
#define fill(a, v)              memset(a, v, sizeof(a))
#define all(a)                  a.begin(),a.end()
#define inf                     (int)1e9
#define linf                    (long long)1e18
#define V                       vector
#define S                       string
#define XX                      first
#define YY                      second
#define PA(arr1, arr2)          for(auto it = arr1; it != arr2; it++) cout<<*it<<" "; cout<<"\n";
#define EL cout<<"\n"

typedef V<int> vi;
typedef V<S> vs;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

// Credit: yashChandnani
void P(int x) {cerr << x;}
void P(long long x) {cerr << x;}
void P(float x) {cerr << x;}
void P(double x) {cerr << x;}
void P(long double x) {cerr << x;}
void P(char x) {cerr << '\'' << x << '\'';}
void P(const char *x) {cerr << '\"' << x << '\"';}
void P(const string &x) {cerr << '\"' << x << '\"';}
void P(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void P(const pair<T, V> &x) {cerr << '{'; P(x.first); cerr << ","; P(x.second); cerr << '}';}
template<typename T>
void P(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), P(i); cerr << "}";}

// **************** Program body starts here *********************
void _main() {
   
    int n = SS;
    vi a(n);
    rep(i, n) a[i] = SS;
    int k = 0, ans = 0;
    if (count(all(a), -1) != n) {
        vi v;
        rep(i, n) {
            if (a[i] == -1) continue;
            if (i+1 < n && a[i+1] == -1 || i-1 >=0 && a[i-1] == -1) {
                v.pb(a[i]);
            }
        }
        sort(all(v));
        k = (v[0] + v[si(v)-1])/ 2;
        ans = -1;
        rep(i, n) {
            if (a[i] == -1) a[i] = k;
            if (i>0) {
                ans = max(ans, abs(a[i]-a[i-1]));
            }
        }
    }
    cout<<ans<<"\n";
   
}
// **************** Program body ends here ***********************


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _ = SS;
    while (_--) {
        _main();
    }
    return 0;
}
