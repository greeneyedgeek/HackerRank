/*
* Author: greeneyedgeek
* Date: 2018-04-10
*/

#include <string>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    try {   
        cout << stoi(S) << endl;
        
    } catch(invalid_argument &a) {
        cout << "Bad String" << endl;
        
    }
    
    return 0;
}
