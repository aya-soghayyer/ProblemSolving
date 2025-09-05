//*** K - I Wanna Be the Guy
// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    set<int> n;
    int s, x, y;
    cin >> s >> x;
    for (int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        n.insert(val);
    }
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int val;
        cin >> val;
        n.insert(val);
    }

    auto it = n.find(s);
    (n.size() == s) ? cout << "I become the guy." << endl : cout << "Oh, my keyboard!" << endl;
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
