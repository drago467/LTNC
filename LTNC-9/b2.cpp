#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double d;
    string s;
    cin >> i >> d;
    cin.ignore();
    getline(cin, s);
    cout << i + 4 << endl;
    cout << fixed << setprecision(1) << d + 4.0 << endl
         << "HackerRank " << s;
}