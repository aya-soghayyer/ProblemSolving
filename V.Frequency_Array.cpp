//*** V. Frequency Array

// A - You're Given a String...

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    
}

signed main()
{
    // FAST int t;
    // cin >> t;
    // while (t--)
    // {
    // start();
    // }

     int n, m;
    cin >> n >> m; 
    vector<int>freq(m+1,0);
    int val; 
    while (n--){
        cin >> val; 
        freq[val]++; 
    }
    

     for (int i = 1; i <= m; i++) {
            cout << freq[i] << endl;
        
    }
    return 0;
}

    

  