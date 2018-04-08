/*
* Author: greeneyedgeek
* Date: 2018-04-08
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    	// Add your code here
    Difference (vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        int max = -1;
        int min = 99999;
        for (int element : elements) {
            if (element > max) { max = element; }
            if (element < min) { min = element; }
            
        }
        maximumDifference = max-min; 
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
