#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    map<string, int> mp;
    while (n--) {
        string ten;
        int n;
        cin >> ten >> n;
        mp[ten] = n;
    }
    string ten;
    while (cin >> ten) {
        if (mp.find(ten) != mp.end()) {
            cout << ten << "=" << mp[ten] << endl;
        }
        else cout << "Not found" << endl;
    }
}