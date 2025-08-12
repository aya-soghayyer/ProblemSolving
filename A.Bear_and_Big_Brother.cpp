//***  A. Bear and Big Brother

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int a, b; 
    cin >> a >> b;
    int years = 0;
    while (b>= a)
    {
        a *= 3;
        b *= 2;
        // cout << a << " " << b << endl;
        years++;
    }
    cout << years << endl;

    
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