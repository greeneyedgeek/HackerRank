/**
* Author: greeneyedgeek
* Date: 2018-04-04
*/

#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    
    int i, sum = 0, max = 0;
    while (n > 0) {
        
        i = n%2;
        switch (i) {
    
            // if i == 1
            case 1: {
                
                sum++; 
                max = sum > max ? sum : max;
     
            } break;
            
            // if i != 1
            default: {
                
                sum = 0;
                
            } break;
    
        }
        n /= 2; 
    }
    
    cout << max << endl;
    
    return 0;
}

/**
* Testcase
* Input (stdin)
* 5
* Your Output (stdout)
* 1
* Expected Output
* 1
*/
