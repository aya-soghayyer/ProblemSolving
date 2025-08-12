//***  A. Anton and Danik


#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
  int n, countD = 0, countA = 0; 
  cin >> n; 
  char  s[n]; 
  for (int i = 0; i < n; i++){
    cin >> s[i]; 
  }
    for (int i = 0; i < n; i++){
      if(s[i] == 'D')
      countD++; 
      else if (s[i] == 'A')
      countA++; 
    }
    // cout << countD << endl;
    // cout << countA << endl;

    if (countA > countD)
    cout << "Anton" << endl;
    else if (countD > countA)
    cout << "Danik" << endl;
    else if ( countD == countA)
    cout << "Friendship" << endl;
  

  // int countO = 0, countC;
  // string s;
  // cin >> s;
  // for ( int i = 0; i < s.size(); i++){
  //   if (s[i] == '(' && s[i+1] == ')' ){
  //   countO++;
  //   // cout << s[i] << " , " << s[i+1] << " , " << countO << endl;
  //   // break;
  //   }
  //   cout << sizeof(s) << endl;
    // else if (s[i] == ')' && s[i+1] == ')')
    // {
    // countC++;
    // break;
    // }

  }
  // if (countO > 1 )
  // cout << "Yes" << endl; 

  // else if ((countO == 1 || countO == 0) || s== "(()())" )
  // cout << "No" << endl; 





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
