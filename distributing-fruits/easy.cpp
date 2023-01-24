#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll NfactorialDivisibleByK(ll n, ll k)
{
    ll fact = 1;
    for (ll i = 1; i <= n; i++)
    {
        fact *= i;
        if (fact % k == 0)
            return true;
    }
    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // assert(n > 0 && k > 0 && n <= (ll)(20) && k <= (ll)(1e14));
        cout << (NfactorialDivisibleByK(n, k) ? "YES" : "NO") << '\n';
    }
}
