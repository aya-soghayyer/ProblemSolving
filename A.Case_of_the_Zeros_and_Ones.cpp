//*** A. Case of the Zeros and Ones


#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void start()
{
    int n, Ones = 0, Zeros = 0; 
    cin >> n; 
    vector<char> s; 
    string a; 

    // auto it1 = s.find('0'); 
    // auto it2 = s.find('1'); 
    // while (n--){
        cin >> a; 
        for (int i  = 0 ; i< n; i++){
        if (a[i] == '1')
        Ones++; 
        else if (a[i] == '0')
        Zeros++; 
        
    }
    // } 
    if ( Ones == Zeros){
        cout << 0 << endl;
    }
    else if ( Ones > Zeros)
    cout << Ones - Zeros <<endl;

    else if (Zeros > Ones)
    cout << Zeros - Ones << endl;





    // int n, k, sum = 0, count = 0;
    // cin >> n >> k;
    // // cout << "n before " << n<<endl; 
    // vector<int> nums;
    // for (int i = 0 ; i< n; i++)
    // {
    //     int a;
    //     cin >> a;
    //     nums.push_back(a);
    // }
    // sort(nums.begin(), nums.end());
    // cout << "what's going onnnn? ";  
    //  for ( int i = 0 ; i < n ; i++ ){
    //  cout <<  nums[i] << " "; 

    //  }
    //  if ( k % 2 == 0 ){
    //      while(k--){
    //     // cout <<"handle error: " << nums[i] << " "; 
    //        sort(nums.begin(), nums.end());
    //         if ( nums[0] < 0 ){
    //             // count++; 
    //             // cout << "even if (1): " <<nums[i] << endl; 
    //             nums[i] = -1*nums[i]; 

    //             // cout << "even if (2): " <<nums[i] << endl; 
    //         }
    //     }
       
    // }
    //  else {
    //        sort(nums.begin(), nums.end());

    //     }
    //     sort(nums.begin(), nums.end());
    // cout << "sorting: "; 
    // for ( int a : nums){
    //     sum +=a; 
    //     cout <<a <<" " ; 
    // }
    // cout << endl;

    // cout<< sum << endl;






    // if (m %2 == 0){
    //     for (int i = 0; i< n; i++){
    //         if (nums[i]<0 )
    //         nums[i]= -1* nums[i]; 
    //         sum+=nums[i];
    //     }
    // }
    // else {
    //      for (int i = 0; i< n; i++){
    //         if (nums[i]<0 )
    //         nums[i]= -1*nums[i]; 
            
    //         sum+=nums[i];
    //     }
    //     if (nums[0]<0 )
    //     sum-= (nums[0]*2); 
    // }
    // cout << sum << endl;
    // if (m <= n)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         nums[i] = -1 * nums[i];
    //     }
    //     for (int a : nums)
    //     {
    //         sum += a;
    //     }
    //     cout << sum << endl;
    // }
    // else
    // {
    //     if (k % 2 == 0){


    //     }
    //     else {}
    //     // cout <<"n " <<n <<endl; 
    //     // cout <<"m " <<m <<endl; 

    //     k = m - n;
    //     // cout <<"k " <<k <<endl; 
    //     for (int i = 0; i < k; i++)
    //     {
    //         nums[i] = -1 * nums[i];
    //     }
    //     for (int a : nums)
    //     {
    //         sum += a;
    //     }
    //     cout <<  -1*sum << endl;
    // }
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
