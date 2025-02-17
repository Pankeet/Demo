#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size ;
        cin >> size ;
        string s;
        cin >> s;
        // We can use count variable but to reduce redundancy we used size variable only
        // Also size variable has no use for us to achieve our ans , hence we can reuse the variable
        if(s[0] == '1'){
            size = 1 ;
        }
        else{
            size = 0 ;
        }
        for(int i=0;i<s.size() - 1;i++){

            if(s[i] != s[i+1]){
                size++;
            }
        }
        cout << size << endl;
    }
}