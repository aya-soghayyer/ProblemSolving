//*** B.Maximum Multiple Sum.cpp ***//

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
    //     start();
    // }

    int a[5][5];
    int num;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            // cout << "a[" << i << "][" << j << "] ";
        }
        //  cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
             if (i == 2 && j == 2 && a[i][j] == 1)
            {
                num = 0; // If the center is already 1, no moves needed
            }

            else if (a[i][j] == 1 && (i != 2 || j != 2))
            {
                num = abs(i - 2) + abs(j - 2); // Calculate the distance to the center
            }
            else if (a[i][j] == 1)   
            {
                if ((i == 0 || i == 4) && (j != 2))
                {
                    num = 10 + abs(j - 2);
                }
                // else if ((i == 1 || i == 3) && (j != 2))
                // {
                //     num = 5 + abs(j - 2);
                // }
                // else if ((j == 1 || j == 3) && (i != 2))
                // {
                //     num = 5 + abs(i - 2);
                // }
                // else if ((j == 0 || j == 4) && (i != 2))
                // {
                //     num = 10 + abs(i - 2);
                // }
            }

           
        }
    }


cout << num << endl;

return 0;
}