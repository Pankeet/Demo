#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;

    vector<string> result;
    for(int i=0;i<testcase;i++){
    int a , b , n;
    cin >> n >> a >> b;

    int lilypads[n];

    int temp = a - b;
    int tempo = abs(temp);
    if( ceil(tempo%2) == 0 ){
        result.push_back("YES\n");
    }
    else{
        result.push_back("NO\n");
    }
    }

 for(int i=0;i<testcase;i++){
        cout<<result[i];
    }
}