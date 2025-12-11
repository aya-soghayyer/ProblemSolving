//*** 322. Coin Change */

//*** H. Presents

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
//   


}

signed main()
{
    // FAST int t;
    // cin >> t;
    // while (t--)
    // {
    // start();
    // }
    vector <int>coin = {1,2,5} ;
    int v ; 
    int count =0  ;
    int i = 0; 
    cin>>v;
    sort(coin.begin(), coin.end()); 
    reverse(coin.begin(), coin.end());
    
    while(v){
        count+= v/coin[i]; 
        v = v%coin[i]; 
        i++; 
    }

    cout << count  << endl;
    return 0;
}
 