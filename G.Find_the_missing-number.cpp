//*** G - Find the missing number

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int n;
    cin >> n;
    int sum = 0  ; 
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        sum+= a; 
       
    }
    int total = (n*(n+1))/2; 
    cout << total - sum << endl;
  
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
