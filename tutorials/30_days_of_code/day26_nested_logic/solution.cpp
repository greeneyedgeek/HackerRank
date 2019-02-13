/**
* Author: greeneyedgeek
* Date: 2019-02-12
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, rd, rm, ry, ed, em, ey;
    cin >> rd >> rm >> ry;
    cin >> ed >> em >> ey;
    
    if (rd <= ed && rm <= em && ry <= ey ||
       rd > ed && rm > em && ry < ey
       ) {
        cout << 0;
    } else if (rd >= ed && rm <= em && ry <= ey){
        cout << 15 * (rd - ed);
    } else if (rm >= em && ry <= ey){
        cout << 500 * (rm -em);
    } else if (ry >= ey){
        cout << 10000;
    }
    return 0;
}
