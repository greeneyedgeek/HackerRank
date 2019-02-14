#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	// Complete this function
stringstream ss(str);
vector<int> vector_int;
char spacer;
int value;
    while (!ss.eof())
    {
        ss >> value >> spacer;
        vector_int.push_back(value);
    }
    return vector_int;
}

int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
