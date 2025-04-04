#include <bits/stdc++.h>
using namespace std;

#define nline endl


bool checkstr(string s , int n){
    for(int i = 0;i < n - 1 ;i++){
        if(s[i] != s[i+1]){
            return false ;
        }
    }
    return true ;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t ; 
    cin >> t;
    
    while (t--) {
        int n , k;
        string s ;
        cin >> n >> k >> s;

        if(checkstr(s , n)) cout << "NO" << nline;

        else if( k >= 1 ) cout << "YES" << nline ;

        else if(k < 1){
            string ss ;
            ss = s;
            reverse(ss.begin() , ss.end());
            if(ss > s){
                cout << "YES" << nline;
            }
            else{
                cout << "NO" << nline ;
            }
        }
    }
    return 0;
}