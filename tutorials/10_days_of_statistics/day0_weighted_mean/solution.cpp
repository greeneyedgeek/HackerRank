#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

float weighted_mean(vector<int> x, vector<int> w)
{
    float n{0}, d{0};
    for (int i = 0; i < x.size(); i++)
    {
        n += x[i]*w[i];
        d += w[i];
    }
    return (float) n/d;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, input;
    vector<int> x, w;

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> input;
        x.push_back(input);
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> input;
        w.push_back(input);
    }
    cout << fixed << setprecision(1) << weighted_mean(x, w);
    return 0;
}
