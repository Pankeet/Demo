#include <iostream>
#include<algorithm>
using namespace std;

int gcd(int arr[] , int n){

    // Auto gives compiler the authority to decide at compiler time the return type of minmax_element function
    // fYI minmax_element return a pair of pointers in which first pair gives minimum element and second gives maximum
    auto ans = minmax_element(arr, arr + n);
    return *ans.second - *ans.first ;
}

int main() {
    ios_base::sync_with_stdio(false) , cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        
        int *n = new int();
        cin >> *n;
        
        int *arr = new int[*n];

        for (int i = 0; i < *n; i++) {
            cin >> arr[i];
        }
        cout << gcd(arr, *n) << endl;

        delete[] arr;
        delete n;
    }
    return 0;
}
