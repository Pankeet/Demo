#include<iostream>
using namespace std ;
 
int main(){
    ios::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t ;

    while(t--){
        int x , y , a ;
       cin >> x >> y >> a ;

       if( a % ( x + y ) < x)  cout << "NO" << endl;
 
       else cout << "YES" << endl;
    }
    return 0;
}