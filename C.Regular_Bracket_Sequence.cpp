//*** C - Regular Bracket Sequence

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
            count++;
    }

    if (s[0] == ')')
        cout << "NO" << endl;
    else if (s[s.size() - 1] == '(')
        cout << "NO" << endl;
    else
        (count % 2 != 0) ? cout << "NO" << endl : cout << "YES" << endl;
}

signed main()
{
    FAST int t;
    cin >> t;
    while (t--)
    {
        start();
    }

    return 0;
}
