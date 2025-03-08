// #include<iostream>
// #include<sstream>
// #include<vector>
// #include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str ;
    cin >> str ;
    stringstream sp(str);
    string token;
    while(getline(sp , token , ',')){
        cout << token << endl;
    }
}
