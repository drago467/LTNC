#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int l, int r, int x)
{
    int m = (l + r) / 2;
    if (arr[m] == x)
    {
        return m;
    }
    else if (arr[m] < x)
    {
        return binary_search(int arr[], int l + 1, int r, int x);
    }
    else if (arr[m] > x)
    {
        return binary_search(int arr[], int l, int r - 1, int x);
    }
    else
        return -1;
}