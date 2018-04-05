/**
* Author: greeneyedgeek
* Date: 2018-04-05
*/

#include <vector>
#include <iostream>

using namespace std;



int CalcHourglass(int i, int j, vector<vector<int>> arr) {
    return arr[i+0][j+0] + arr[i+0][j+1] + arr[i+0][j+2]
                         + arr[i+1][j+1] +
           arr[i+2][j+0] + arr[i+2][j+1] + arr[i+2][j+2];
    
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int maxSum = -99999;
    for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
                maxSum = CalcHourglass(i, j, arr) > maxSum ? CalcHourglass(i, j, arr) : maxSum;    
          
            }   
    }
    
    cout << maxSum << endl;
    
    return 0;
}

/**
* Testcase
* Input (stdin)
* 1 1 1 0 0 0
* 0 1 0 0 0 0
* 1 1 1 0 0 0
* 0 0 2 4 4 0
* 0 0 0 2 0 0
* 0 0 1 2 4 0
* 
* Your Output (stdout)
* 19
* 
* Expected Output
* 19
* /
