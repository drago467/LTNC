#include <bits/stdc++.h>
using namespace std;

void enven_post(string s) {
    for (int i=0; i < s.length(); i++) {
        if (i%2==0) cout << s[i];
    }
    cout << ' ';
}

void odd_post(string s) {
    for (int i=0; i < s.length(); i++) {
        if (i%2==1) cout << s[i];
    }
    cout << ' ';
}
int main () {
    int n; string s;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s;
        enven_post(s);
        odd_post(s);
        cout << endl;
    }
}