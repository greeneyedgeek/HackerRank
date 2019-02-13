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
    bool is_prime;    
    int n, value;
    cin >> n; 
    while (cin >> value)
    {
        bool is_prime = true;
        if (value == 1) 
        {
            is_prime = false;   
        } else
        {
            for(int i = 2; i <= sqrt(value); ++i)
            {
                if (value % i == 0)
                {
                    is_prime = false;
                    break;
                } 
            }
        }
         cout << (is_prime ? "Prime\n" : "Not prime\n");
    }
    return 0;
}
