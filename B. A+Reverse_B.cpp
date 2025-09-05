//*** B. A + Reverse B

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int a, b;
    string s; 
    cin >>a >>b;
    s = to_string(b); 
    reverse(s.begin(), s.end());
    int res = a + stoi(s); 
    cout <<  res << endl;

   
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
