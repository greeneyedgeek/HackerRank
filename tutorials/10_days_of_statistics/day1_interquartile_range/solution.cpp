#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

float median(vector<int> elements) {
  int size = elements.size();
  sort(elements.begin(), elements.end());
  return (elements.size() % 2) ? (float)elements[((size - 1) / 2)]
                               : (float)(elements[((size - 1) / 2)] +
                                         elements[((size - 1) / 2) + 1]) /
                                     2;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, input;
  vector<int> v0, v1, count, lower, upper;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> input;
    v0.push_back(input);
  }
  for(int i = 0; i < n; i++) {
    cin >> input;
    int size = input;
    int temp = v0[i];
    for (int j = 0; j < input; j++) {
        v1.push_back(temp);
    }
  }
  sort(v1.begin(), v1.end());
  for (int i = 0; i < v1.size(); i++) {
    if (v1.size() % 2) {
      if (i < v1.size() / 2) {
        lower.push_back(v1[i]);
      } else if (i > v1.size() / 2) {
        upper.push_back(v1[i]);
      }
    } else {
      if (i < v1.size() / 2) {
        lower.push_back(v1[i]);
      } else if (i >= v1.size() / 2) {
        upper.push_back(v1[i]);
      }
    }
  }

  cout << fixed << setprecision(1) << median(upper) - median(lower) << endl;

  return 0;
}
