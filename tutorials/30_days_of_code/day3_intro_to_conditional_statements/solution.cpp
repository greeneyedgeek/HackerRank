/*
* Author: greeneyedgeek
* Date: 2018-03-28
*/

#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    string answer;
    answer = N%2==1 || 6 <= N && N <= 20 ? "Weird" : "Not Weird";
    cout << answer;
    return 0;
}
