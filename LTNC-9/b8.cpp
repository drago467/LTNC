#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int arr[n];
    for (int &x :arr) cin >> arr;
    for (int i = n-1; i> >= 0; i--) {
        cout << arr[i] << ' ';
    }
}