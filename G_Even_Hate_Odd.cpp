#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        
        int even_count = 0, odd_count = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even_count++; 
            } else {
                odd_count++; 
            }
        }
        
        if (n % 2 != 0) {
            cout << -1 << endl;
            break;
        }
        
        if (even_count == odd_count) {
            cout << 0 << endl;
        } else {
            int balance_diff = abs(even_count - odd_count);
            cout << balance_diff / 2 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
