#include <iostream>
#include <cmath>
using namespace std;

int PowerSum(int x, int n, int num)
{

    if (x == 0)
    {
        return 1;
    }

    if (x < 0)
    {
        return 0;
    }

    int ans = 0;

    for (int i = num; pow(i, n) <= x; i++)
    {
        ans += PowerSum(x - pow(i, n), n, i + 1);
    }

    return ans;
}

int main()
{

    int x;
    int n;
    cin >> x >> n;

    int ans = PowerSum(x, n, 1);

    cout << ans;

    return 0;
}
