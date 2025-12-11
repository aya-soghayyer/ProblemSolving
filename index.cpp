//*** A - You're Given a String... */



#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{   
    string s; 
    vector<char> v; 
    vector<char> sub;
    vector<char> sub2;  
    int size, count = 0;
    cin >> s; 
    size = s.length()/2; 
    if (((s.length()) % 2) != 0){
        size+=1; 
    }
    cout <<"size: " << size << endl;

    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]); 
        if (i >= size-1){
            sub.push_back(s[i]);
        }
    }

    for(int i = 0 ; i < size; i++){
         cout << "sub: " << sub[i]<<", ";
    }
    cout << endl;
      for(int i = 0 ; i < s.length(); i++){
                    cout << "v: " << v[i]<<", "; 

    }
    cout << endl;

    for(int i = 0; i< size; i++ ){
        if(sub[i] == v[i]){
            count++; 
        }
    }
    cout << count << endl; 

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
 