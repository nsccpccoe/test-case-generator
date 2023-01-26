#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cutout, target;
    cin >> cutout >> target;
    vector<int> hashcutout(26, 0), hashtarget(26, 0);
    // assert(cutout.size() > (int)0 && cutout.size() <= (int)1e6);
    // assert(target.size() > (int)0 && target.size() <= (int)1e6);
    for (auto &ch : cutout)
        hashcutout[ch - 'a']++;
    for (auto &ch : target)
        hashtarget[ch - 'a']++;
    int ans = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (hashtarget[i] > 0)
            ans = min(ans, hashcutout[i] / hashtarget[i]);
    }
    cout << ans << '\n';
}
