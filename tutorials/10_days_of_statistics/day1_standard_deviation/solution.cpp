#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

float calc_mean(vector<int> elements) 
{
  double sum{0};
  for (int element : elements) 
  {
    sum += (float) element;
  }
  return sum / elements.size();
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, input;
    long sum{0};
    float mean;
    double standard_deviation;
    vector<int> v;
    cin >> n;
    while (cin >> input)
    {
        v.push_back(input);
    }

    mean = calc_mean(v);

    for(int i = 0; i < n; i++)
    {
        sum += (v[i]-mean)*(v[i]-mean);
    }
    standard_deviation = sqrt(sum/n);
    cout << fixed << setprecision(1) << standard_deviation << endl;
    return 0;
}
