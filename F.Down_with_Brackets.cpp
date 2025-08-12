//***  F - Down with Brackets


#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{  

  int count = 0, f = 0;
  string s;
  cin >> s;
  for ( int i = 0; i < s.size(); i++){
        if (s[i] == '(')
        count++;
        else count--; 
        if (count == 0 && i!= s.size()-1)
        {
            f = 1;
            break;
        }
    }
    if (f == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

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
