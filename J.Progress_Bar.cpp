//***  J - Progress Bar



#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{  
    int n, k, t, full, part, sat; 
    cin >> n >> k >> t; 
    full = (n*k*t)/100;
    sat = full/k; 
    part = full % k;

    for (int i = 0; i < n; i++){
        if(i < sat)
        cout << k << endl;
        else if (i == sat){
        cout << part << endl;
        // break;
        // countinue;
        }
        else if (i > sat) cout << 0 << endl;

    }
    



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
