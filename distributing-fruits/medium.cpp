#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll NfactorialDivisibleByK(ll n, ll k)
{
    for (ll i = 1; i <= n; i++)
    {
        k /= gcd(i, k);
        if (k == 1)
            break;
    }
    return (k == 1);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // assert(n > 0 && k > 0 && n <= (ll)(1e6) && k <= (ll)(1e14));
        cout << (NfactorialDivisibleByK(n, k) ? "YES" : "NO") << '\n';
    }
}
