#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char piece;
        int m, n;
        cin >> piece >> m >> n;

        int ans = 0;

        if (piece == 'r' || piece == 'Q') {
            ans = min(m, n);
        }
        else if (piece == 'k') {
            ans = (m * n + 1) / 2;
        }
        else if (piece == 'K') {
            ans = ((m + 1) / 2) * ((n + 1) / 2);
        }

        cout << ans << endl;
    }

    return 0;
}
