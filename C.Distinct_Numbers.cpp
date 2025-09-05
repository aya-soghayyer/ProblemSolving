//*** C - Distinct Numbers

// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
   int n; 
   set<int>s; 
   cin >> n; 
   for (int i = 0; i < n; i++){
    int val; 
    cin >> val; 
    s.insert(val); 
   }
   cout << s.size() << endl;
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
