#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        int Count = 0;

        for (int i = 1; ; i++) { // একটাই i++
            if (i % 3 != 0 && i % 10 != 3) {
                Count++;
            }

            if (Count == k) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
