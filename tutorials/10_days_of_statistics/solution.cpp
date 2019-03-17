#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

float mean(vector<int> elements) 
{
    double sum{0};
    for (int element : elements) {
        sum += element;
    }
    return sum/elements.size();
}

float median(vector<int> elements) 
{
    int size = elements.size();
    sort(elements.begin(), elements.end());
    return (elements.size() % 2) 
        ? (float) elements[((size-1)/2)]
        : (float) (elements[((size-1)/2)] + elements[((size-1)/2)+1]) / 2;
}

// Algorithm adapted from 
// tutorialspoint.com/learn_c_by_examples/mode_program_in_c.htm
int mode(vector<int> elements)
{
sort(elements.begin(), elements.end());
int size = elements.size();
int count{0}, maxCount{0}, i, j;
int value = elements[0];
for (i = 0; i < size; i++) 
{
    count = 0;
    for (j = 0; j < i; j++) 
    {
      if (elements[i] == elements[j]) 
      {
        count++;
      }
    }
    if (count > maxCount) 
    {
      maxCount = count;
      value = elements[i];
    }
    if (count == maxCount && value > elements[i]) 
    {
        value = elements[i];
    }
}      
return value;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, element;
    vector<int> elements;
    
    cin >> n;
    while (cin >> element) {elements.push_back(element);}

    cout << fixed << setprecision(1) 
         << mean(elements) << endl
         << median(elements) << endl
         << mode(elements) << endl;

    return 0;
}
