#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    cin.tie(0), cout.tie(0),ios_base::sync_with_stdio(false);
    ll a,b;
    cin >> a >> b;
    cout << (a&b) << " " << (a|b) << " " << (a^b);
}