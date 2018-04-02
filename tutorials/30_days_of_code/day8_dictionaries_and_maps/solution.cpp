/*
* Author: greeneyedgeek
* Date: 2018-04-02
*/

#include <iostream>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> phone_book;
    int n;
    
    string name;
    int phone_number;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        cin >> name >> phone_number;
        phone_book.insert(pair<string, int>(name, phone_number));
        
    }
    
    map<string, int>::iterator itr;
    while (cin >> name) {

            itr = phone_book.find(name);
        
            if (itr != phone_book.end()) {
                
                 cout << itr->first << "=" << itr->second << endl;
                
            } else {
                
                 cout << "Not found" << endl;
                
            }     
        }  
    
    return 0;
    
}

/*
* Testcase
*
* Input (stdin)
*
* 3
* sam 99912222
* tom 11122222
* harry 12299933
* sam
* edward
* harry
*
* Your Output (stdout)
*
* sam=99912222
* Not found
* harry=12299933
*
* Expected Output
*
* sam=99912222
* Not found
* harry=12299933
*
*/
