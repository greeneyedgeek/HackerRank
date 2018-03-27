/*
* Author: greeneyedgeek
* Date: 2018-03-27
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    cout << "The total meal cost is " 
         << round(meal_cost + meal_cost*tip_percent/100 + meal_cost*tax_percent/100) << " dollars." << endl;
    return 0;
}
