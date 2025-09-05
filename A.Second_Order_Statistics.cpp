//*** A. Second Order Statistics
// B - Helpful Maths

// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
  int n, sub;
  set<int> number;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> sub;
    number.insert(sub);
  }

  auto it = ++(number.begin());
  if (number.size() > 1)
    cout << *it << endl;
  else if (number.size() <= 1)
    cout << "NO" << endl;

  // for (int c: number)
  // cout << c << endl;
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
