//*** H. Presents

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    //   int n, k, q;
    //   cin >> n>> k>> q;
    int n, a;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        v[i] = a;
    }
    for (int i = 1; i <= n; i++)
    {
        auto it = find(v.begin(), v.end(), i);
        cout << it - v.begin() << " ";
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
 