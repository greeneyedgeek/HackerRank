/*
* Author: greeneyedgeek
* Date: 2018-03-26
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int int_variable;
    double double_variable;
    string string_variable;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> int_variable >> double_variable;
    getline(cin >> ws, string_variable);

    // Print the sum of both integer variables on a new line.
    cout << i + int_variable << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + double_variable << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << string_variable << endl;
    
    return 0;
}
