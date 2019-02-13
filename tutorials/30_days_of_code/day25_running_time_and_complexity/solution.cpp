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

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    bool is_prime = false;    
    int n, value;
    cin >> n; 
    while (cin >> value)
    {
        bool is_prime = true;
        for(int i = 2; i != value; ++i)
        {
           if (value % i == 0)
           {
               is_prime = false;
               break;
           } 
        }
         cout << ( is_prime ? "Prime\n" : "Not prime\n" );
    }
    return 0;
}
