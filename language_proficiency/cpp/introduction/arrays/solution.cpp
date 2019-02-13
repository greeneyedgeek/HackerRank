#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, input;
    cin >> n;
    vector<int> my_array;
    for(int i = 0; i <= n; ++i)
    {
        cin >> input;
        my_array.push_back(input);
    }
    for(int i = 1; i <= n; ++i)
    {
        cout << my_array.at(n-i) << " ";
    }
    return 0;
}
