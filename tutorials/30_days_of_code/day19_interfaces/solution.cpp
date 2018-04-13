/**
* Author: greeneyedgeek
* Date: 2018-04-13
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    //Solution
    int divisorSum(int n) {
        if (n%2) {
            if (n == 1) { 
                return 1;
                
            } else {
               return n+1; 
                
            }
        } else {
            int sum = n+1;
            for (int i = 2; i < n; i++) {
                sum += n%i ? 0 : i;
            }            
            return sum;
        }
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
