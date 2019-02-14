#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> vector_data;
    
    int nbr_arrays, nbr_queries;
    cin >> nbr_arrays >> nbr_queries;
    for(int i = 0; i < nbr_arrays; i++)
    {
        int length;
        cin >> length;
        vector<int> temp;
        for (int j = 0; j < length; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        vector_data.push_back(temp);
    }
        for(int i = 0; i < nbr_queries; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << vector_data.at(a).at(b) << endl;
    }
    return 0;
}
