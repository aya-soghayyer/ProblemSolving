//***  A. Petya and Strings

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int res = 0, sum = 0, sum2 = 0;
    string s, c;
    cin >> s >> c;

    for (int i = 0; i < s.size(); i++)
    {
      
            s[i] = tolower(s[i]);
            c[i] = tolower(c[i]);

    }

  if (s > c){
    cout << 1 << endl;
  }
  else if (c > s){
    cout << -1 << endl;
  }
  else cout << 0 << endl;
  
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
