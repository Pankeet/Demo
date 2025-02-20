#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 2) {
            cout << "YES\n";
            continue;
        }
        
        int a[n];
        bool arr = true;
        
        for (int i = 0; i < n - 2; i++) {
            cin >> a[i];
        }

        for (int i = 2; i < n - 2; i++) {
            if (a[i - 1] == 0) {
                if (a[i] == 1 && a[i - 2] == 1) {
                    arr = false;
                    cout << "NO\n";
                    break;
                }
            }
        }

        if (arr) {
            cout << "YES\n";
        }
    }
}
