#include <iostream>
#include<algorithm>
using namespace std;

#define nline endl
#define ethflow ios::sync_with_stdio(false) , cin.tie(nullptr)

void clockWork(int arr[] , int n){
    int i , j ;
    j = 1 ; 
    int m , t;
    bool ans = true ; 
    for(i = 0 ; i < n ; i++){
        m = 2*( n - ( j++ ));
        t = 2*( i - 0 ) ; 
        if(arr[i] <= max( m , t )) {
            cout << "NO" << nline ; 
            ans = false ;
            break ;
        }
    }
    if(ans){
        cout <<"YES" << nline;
    }
}

int main() {
    ethflow ;
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        
        int *arr = new int[n];

        for(int i = 0 ; i<n;i++){
            cin >> i[arr];
        }
        clockWork(arr , n);

        delete[] arr;
    }
    return 0;
}