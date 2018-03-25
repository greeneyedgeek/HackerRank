/*
* Author: greeneyedgeek
* Date: 2018-03-25
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
        // Complete the code.
    int int_variable;
    long long_variable;
    char char_variable;
    float float_variable;
    double double_variable;
    
    cin >> int_variable >> long_variable >> char_variable >> float_variable >> double_variable;
    
    cout << int_variable << endl << long_variable << endl << char_variable << endl 
         << fixed << setprecision(3) << float_variable << endl << fixed << setprecision(9) << double_variable << endl;
    
    return 0;
}
