#include <bits/stdc++.h>
using namespace std;
int main()
{
    double meal_cost; 
    int tip_percent, tax_percent;
    cin >> meal_cost >> tip_percent >> tax_percent;
    cout << round(meal_cost + meal_cost * tip_percent / 100 +  meal_cost * tax_percent / 100);
}