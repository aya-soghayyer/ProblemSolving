//*** C - Taim and Zingers

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

// void start()
// {
//     // // int n;
//     // // cin >> n;
//     // int s[n];
//     // for (int i  =  0 ; i < n; i)
//     long long n, k, res = 0, rem = 0;
//     cin >> n >> k;
//     set<int> s;
//     vector<long long> v = {0, 1, 2, k, k - 1, k - 2};
//         long long ans = 0;

//     // res = n-k;
//     // n -= k ;
//     // if (n/3 == 0 )
//     // res+= (n/3);
//     // else if (n/2 == 0 )
//     // {
//     //     res += (n/2) ;
//     // }
//     // else res = n ;
//     // cout << res << endl;
//     for (int i : v)
//     {
//         if (i < 0 || i > k)
//             continue;
//         //    cout << "first "<<res <<endl;

//         res = i;
//         // cout << "res after equel to i = " <<res <<endl;
//         rem = n - i;
//         if (rem % 3 == 0)
//             res += (rem / 3);
//         else if (rem % 2 == 0)
//         {
//             res += (rem / 2);
//         }
//         else
//             res += rem;
//         // cout << "res value in the set = " <<res << endl;
//         // s.insert(res);
//          ans = max(ans, res);
//     }
//     // for (int i : s){
//     //     cout << i << endl;
//     // }
//         cout << ans << endl;

//     // cout << *s.rbegin() << endl;
// }
void start()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    vector<long long> tries = {0, 1, 2, 3, 4, 5, k};
    for (long long i : tries)
    {
        if (i < 0 || i > k)
            continue;
        long long stolen = i;
        long long remain = n - i;
        long long gain = 0;

        if (remain % 3 == 0)
            gain = remain / 3;
        else if (remain % 2 == 0)
            gain = remain / 2;
        else
            gain = remain;

        ans = max(ans, stolen + gain);
    }

    cout << ans << endl;
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


