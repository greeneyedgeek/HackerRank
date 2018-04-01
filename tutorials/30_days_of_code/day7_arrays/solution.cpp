/*
* Author: greeneyedgeek
* Date: 2018-04-01
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    reverse(arr.begin(), arr.end());
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    
    return 0;
}
