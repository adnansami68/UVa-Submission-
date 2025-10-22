#include<iostream>
using namespace std;

class PowerCrisis {
private:
    int n;
public:
    PowerCrisis(int N) {
        n = N;
    }

    int findWellington() {
        for (int m = 1;; m++) {
            if (checklastregion(m) == 13)
                return m;
        }
    }

    int checklastregion(int m) {
        int off[100] = {0};
        int remain = n;
        int pos = 1;
        off[1] = 1;
        remain--;
        while (remain > 0) {
            int step = m;
            while (step > 0) {
                pos++;
                if (pos > n) pos = 1;
                if (off[pos] == 0) step--;
            }
            off[pos] = 1;
            remain--;
        }
        return pos;
    }
};

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        PowerCrisis as(n);
        cout << as.findWellington() << "\n";
    }
    return 0;
}
