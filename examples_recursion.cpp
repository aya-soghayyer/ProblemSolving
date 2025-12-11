//*** K - Cumulative Sum Query

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

// void start()
// {
   
// }

// sum recursion
int sum (int i , int n){
    if (n == i )return n ;
    return i+sum(i+1, n); 
}

// factorial recursion
int fact (int n){
    if (n == 1 )return 1 ;
    return n*fact(n-1); 
}

// void  triangle(int spaces ,int n){
//    if (n<= 0 )return ; 
   
// }

// traingle recursion
// frirst solution:
void print_t(int space, int n){
    if(n <= 0 ) return ; 
    for(int i = 0; i < n; i++){
        cout << ' ';
        for (int i = 0; i < n; i++){
            cout << '*'; 
        }
        cout << endl;
        return print_t(space+2, n-2);

    }
    
}

// traingle recursion
// second solution:
void print_tt(int spaces, int n){
    if(n <= 0 )return ; 
    else{
                print_tt(spaces+1, n-2);

    for (int i = 0 ; i < spaces; i++){
        cout << ' '; 
    }
        for(int i = 0 ;i < n; i++){
            cout <<'*';
        }
             cout << endl;
    }

    
}

 void digit(int n){
    if (n == 0 ) return ; 
    cout << n%10 <<endl;
    digit (n/10); 
 }


 string getBinary(int n){
    if (n== 0 )return "0" ; 
    return getBinary(n/2)  + to_string(n%2) ; 
 }

// maze 
vector<vector<char>> maze = {{'.','S','X','E'},{'.','.','x','.'}, {'.','.','x','.'},{'.','.','.','.'}};
int n = 4; 

bool maze_way(int r, int c){
    if (c == -1 || r== -1 || r==n || c== n) return false; 
    if (maze[r][c] == 'X') return  false; 
    if (maze[r][c] == 'E') return true; 
       maze[r][c] = 'X'; 
       char ch1 = maze_way(r+1,c);//down
       char ch2 = maze_way(r,c+1);//left
       char ch3 = maze_way(r-1,c);//up
       char ch4 = maze_way(r,c-1);//down
    return ch1 || ch2 || ch3 || ch4;


}

signed main()
{
    // FAST int t;
    // cin >> t;
    // while (t--)
    // {
        // start();
       cout <<"Sum = "  << sum(10,15)<< endl; 
       cout << "Fact = " << fact(6) << endl; 
    //     //  triangle(0,7); 
         digit(1987);
        //  print_t(0 , 7);
        print_tt(0 , 7);
         cout << getBinary(5)<< endl;


         cout <<"************************" <<endl;
         cout << maze_way(0,1)<< endl;

    // }

    return 0;
}

