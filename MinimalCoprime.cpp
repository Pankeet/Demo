#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    vector<int> a1;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        int temp = 0;
        temp = a - b;
        if(a==1 && b==1){
            a1.push_back(a);
        }
        else{
        a1.push_back(abs(temp));
        }
    }

    for(auto &i : a1){
        cout << i << endl;
    }
}