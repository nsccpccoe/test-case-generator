#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll largestPower(ll n, ll p)
{
    ll res = 0;
    while (n)
    {
        n /= p;
        res += n;
    }
    return res;
}

ll maxPrimeFactorPower(ll n, ll k)
{
    ll res = LLONG_MAX;
    ll ct = 0;
    if (k % 2 == 0)
    {
        while (k % 2 == 0)
        {
            k /= 2;
            ct++;
        }
        res = min(res, largestPower(n, 2) / ct);
    }
    for (ll i = 3; i * i <= k; i += 2)
    {
        if (k % i == 0)
        {
            ct = 0;
            while (k % i == 0)
            {
                k /= i;
                ct++;
            }
            res = min(res, largestPower(n, i) / ct);
        }
    }
    if (k > 2)
        res = min(res, largestPower(n, k));
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // assert(n > 0 && k > 0 && n <= (ll)(1e14) && k <= (ll)(1e14));
        cout << (maxPrimeFactorPower(n, k) > 0 ? "YES" : "NO") << '\n';
    }
}
