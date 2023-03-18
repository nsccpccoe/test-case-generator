#include <bits/stdc++.h>
using namespace std;

class person_compare
{
public:
    bool operator()(pair<string, int> p1, pair<string, int> p2) const
    {
        return p1.second < p2.second;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int no_of_transactions, friends;
        cin >> friends;
        cin >> no_of_transactions;

        string x, y;
        int amount;

        map<string, int> netAmount;
        while (no_of_transactions--)
        {
            cin >> x >> y >> amount;
            if (netAmount.count(x) == 0)
            {
                netAmount[x] = 0;
            }
            if (netAmount.count(y) == 0)
            {
                netAmount[y] = 0;
            }

            netAmount[x] -= amount;
            netAmount[y] += amount;
        }

        multiset<pair<string, int>, person_compare> m;

        for (auto p : netAmount)
        {
            string person = p.first;
            int amount = p.second;

            if (netAmount[person] != 0)
            {
                m.insert(make_pair(person, amount));
            }
        }

        int count = 0;
        while (!m.empty())
        {

            auto low = m.begin();
            auto high = prev(m.end());

            int debit = low->second;
            string debit_person = low->first;

            int credit = high->second;
            string credit_person = high->first;

            int settled_amount = min(abs(debit), credit);
            debit += settled_amount;
            credit -= settled_amount;

            m.erase(low);
            m.erase(high);

            if (debit != 0)
            {
                m.insert(make_pair(debit_person, debit));
            }
            if (credit != 0)
            {
                m.insert(make_pair(credit_person, credit));
            }

            count += 1;
        }
        cout<<count<<endl;
    }    
}