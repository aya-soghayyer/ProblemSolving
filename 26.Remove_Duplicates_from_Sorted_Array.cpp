// //*** V. Frequency Array

// // A - You're Given a String...

// #include <bits/stdc++.h>
// #define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define int long long
// #define endl '\n'
// using namespace std;

// void start()
// {
//     int n, m;
//     cin >> n >> m; 
//     vector<int>freq(m+1,0);
//     vector<int> f; 

//     for(int i = 0; i < n; i++){
//         int val; 
//         cin >> val; 
//         f.push_back(val);
//     }
//      for (int element : f) {
//         freq[element]++;
//     }

//      for (int i = 0; i < freq.size(); i++) {
//         if (freq[i] > 0) {
//             cout << freq[i] << endl;
//         }
//     }



//     // vector<int> dataset = {1, 3, 2, 4, 2, 1, 5, 3, 2};
//     // vector<int> frequency(6, 0);  // Assuming values range from 0 to 5

//     // // Counting frequencies
//     // for (int element : dataset) {
//     //     frequency[element]++;
//     // }

//     // // Printing frequencies
//     // for (int i = 0; i < frequency.size(); i++) {
//     //     if (frequency[i] > 0) {
//     //         cout << "Element " << i << " occurs " << frequency[i] << " time(s)" << endl;
//     //     }
//     // }


//     // string s; 
//     // cin >> s; 
//     // map<int, int> freq; 

//     // for (char c: s){
//     //     freq[c]++; 
//     // }

//     // // if ( s.size() % 2 != 0){
        
//     // // }
//     // for (const auto& pair : freq) {
//     //     cout << "Element " << pair.first << " occurs " << pair.second << " time(s)" << endl;
//     // }
// }

// signed main()
// {
//     // FAST int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     start();
//     // }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{  
    // vector<int>nums1={5,6,7,0,0,0,0};
    // vector<int>nums2={1,2,3,4};
    
    
    // int p1=0;
    // int p2=0;
    // while(p2<nums2.size())
    // {
    //     if(nums1[p1]==0)
    //     {
    //         nums1[p1]=nums2[p2];
    //         p2++;
    //     }
    //     else if(nums2[p2]<nums1[p1])// //swap
    //     {
    //         int temp=nums1[p1];
    //         nums1[p1]=nums2[p2];
    //         nums2[p2]=temp;
    //         p1++;
    //     }
    //     else if(nums2[p2] > nums2[p2++]){
    //        p2++; 

    //         }
    //     else {
    //          if(nums1[p1] > nums2[p2++]){
    //          p2++; }
            
    //         else p1++;
    //      }

    // }
    // for(int i=0;i<nums1.size();i++)
    // cout<<nums1[i]<<" ";
    
    // cout<<endl;
    

    vector <int> v = {0,0,0,1,1,1,2,2,3};
    int p1 = 0; 
    int p2 = 1; 
    int size =2 ; 
    
    while (p2 != v.size())
    {
        if (v[p1] < v[p2] )
        {
            v[p1+1] = v[p2]; 
            p2++;
            p1++; 

        }
        // else if (p2 < p1)
        // {
        //     int temp = v[p2]; 
        //     v[p2] = v[p1]; 
        //     v[p1] = v[p2]; 
        // }
        else if (v[p1] == v[p2] )
        p2++;  
    }
    cout << p1 +1 << endl;
    
    for (int n: v){
        cout << n << " "; 
    }
  
     return 0;
}