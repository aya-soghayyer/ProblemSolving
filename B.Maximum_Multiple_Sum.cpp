//*** B.Maximum Multiple Sum.cpp ***//

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;
void start()
{
    int n;
    cin >> n;
    int sum = 0, sum2 = 0, m1 = 2, m2 = 3;
    for (int i = 1; i * m1 <= n; i++)
    {
        sum = sum + (i * m1);
    }
    for (int i = 1; i * m2 <= n; i++)
    {
        sum2 = sum2 + (i * m2);
    }
    if (sum > sum2)
        cout << m1 << endl;
    else if (sum < sum2)
    {
        cout << m2 << endl;
    }
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