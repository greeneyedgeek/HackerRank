/*
* Author: greeneyedgeek
* Date 2018-03-31
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string input;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        cin >> input;
        
        //print even indices
        for (int j = 0; j < input.size(); j+=2) {
            cout << input[j];
        }
        
        cout << " ";
        
        //print odd indices
        for (int j = 1; j < input.size(); j+=2) {
            cout << input[j];
        }
        
        cout << endl;
    }

    return 0;
}
