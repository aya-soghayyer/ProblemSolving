//*** B - Helpful Maths

// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    string s;
    cin >> s;
    multiset<char> n;
    for (char c : s)
    {
        n.insert(c);
    }
    auto it = n.find('+');
    if (it != n.end())
        n.erase('+');

    auto tt = n.begin();
    while (tt != n.end())
    {
        if (tt == n.begin())
            cout << *tt;
        else
            cout << '+' << *tt;
        ++tt;
    }
}

signed main()
{
    // FAST int t;
    // cin >> t;
    // while (t--)
    // {
    start();
    // }
    return 0;
}
