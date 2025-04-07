#include<iostream>
#include<vector>
#include<algorithm>

#define nline endl ;

using namespace std ;

int teamTrain(vector<int>& arr , int n , int k){
    int teams = 0 ;
    int last_team = -1;
    sort(arr.begin(), arr.end() , greater<int>());
    for(int i = 0 ; i<n;i++){
        if(arr[i] * (i - last_team) >= k){
            teams++;
            last_team = i;
        }
    }
    return teams ;
}

int main(){
    ios::sync_with_stdio(false) , cin.tie(nullptr);
    int t ;
    cin >> t;

    while(t--){

        int *n = new int();
        int *x = new int();

        cin >> *n >> *x;
        vector<int> arr(*n) ;
        for(int i=0;i<*n;i++){
            cin >> arr[i] ;
        }

        cout << teamTrain(arr, *n , *x) << nline;

        delete n;
        delete x;
    }
}

