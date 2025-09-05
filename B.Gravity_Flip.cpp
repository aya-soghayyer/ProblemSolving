    //*** B - Gravity Flip

    #include <bits/stdc++.h>
    #define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #define int long long
    #define endl '\n'
    using namespace std;

    void start()
    {
        int n, a;
        cin >> n;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.insert(a);
        }
        for (int num : s)
        {
            cout << num << " ";
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
