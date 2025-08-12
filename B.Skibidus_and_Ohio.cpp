//***  B. Skibidus and Ohio

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
  int t; 
  string s ;
  int res = 0; 
  cin >> s; 
  for (int i = 0; i < s.size(); i++){
    if (s[i] == s[i+1]){
            res = 1;
            break;
    }
    else 
    res = s.size();
        // cout << s[i] << " , " << s[i+1] << endl;


  }
      cout << res << endl;

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
