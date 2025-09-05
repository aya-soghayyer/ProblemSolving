//*** G - Adding Reversed Numbers

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int n;
    cin >> n;
    string s1, s2;
    vector<int> resi;

    while (n--)
    {
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int res = stoi(s1) + stoi(s2);
        string restr = to_string(res);
        reverse(restr.begin(), restr.end());
        resi.push_back(stoi(restr));
    }
    for (int i : resi)
    {
        cout << i << endl;
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
