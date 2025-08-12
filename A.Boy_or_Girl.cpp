//***  A. Boy or Girl

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    string s;
    cin >> s;
    sort(s.begin(), s.begin() + s.size());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << (s.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
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