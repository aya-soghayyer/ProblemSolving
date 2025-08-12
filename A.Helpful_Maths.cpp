//***  A. Helpful Maths

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

bool exceptPlus(const char &a)
{
    return a == '+';
}

void start()
{
    string s;
    cin >> s;
    vector<char> nums;
    for (char c : s)
    {
        if (c != '+')
            nums.push_back(c);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << '+';
    }

    cout << endl;
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