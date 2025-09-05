//*** D - Collecting Numbers

// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int n, count = 1;
    cin >> n;

    vector<int> s(n + 1);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s[val] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (s[i] < s[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
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
