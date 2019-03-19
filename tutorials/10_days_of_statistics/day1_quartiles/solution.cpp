#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float median(vector<int> elements) {
    int size = elements.size();
    sort(elements.begin(), elements.end());
    return (elements.size() % 2) ? (float)elements[((size - 1) / 2)]
                               : (float)(elements[((size - 1) / 2)] +
                                    elements[((size - 1) / 2) + 1]) / 2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, input;
    vector<int> v, lower, upper;
    cin >> n;
    while(cin >> input) {
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        if (v.size()%2) {
          if (i < v.size() / 2) {
            lower.push_back(v[i]);
          } else if (i > v.size() / 2) {
            upper.push_back(v[i]);
          }
        } else {
          if (i < v.size() / 2) {
            lower.push_back(v[i]);
          } else if (i >= v.size() / 2) {
            upper.push_back(v[i]);
          }
        }

    }

    cout << median(lower) << endl << median(v) << endl << median(upper) << endl;

    return 0;
}
