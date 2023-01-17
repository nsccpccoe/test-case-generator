#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    cin.tie(0), cout.tie(0),ios_base::sync_with_stdio(false);
    ll a,b;
    cin >> a >> b;
    assert(a<=b);
    assert(0<=a && 1<=b && b<= 100000);
    if(a/(double)b>=0.75)cout << "Yes";
    else cout << "No";
}