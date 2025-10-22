#include <iostream>
#include <string>
using namespace std;

int NextPerm(string &s) {
    int i = s.size() - 2;
    while(i >= 0 && s[i] >= s[i+1]) i--;
    if(i < 0) return 0;

    int j = s.size() - 1;
    while(s[j] <= s[i]) j--;
    swap(s[i], s[j]);

    int l = i + 1, r = s.size() - 1;
    while(l < r) swap(s[l++], s[r--]);

    return 1;
}

int main() {
    string alpha;
    while(cin >> alpha && alpha != "#") {
        if(NextPerm(alpha))
            cout << alpha << endl;
        else
            cout << "No Successor" << endl;
    }
}
