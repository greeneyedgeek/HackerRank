#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
int spaces = n-1;
int sharp = 1;
for (int i = 1; i <= n; i++) {
    for  (int j = 0; j < spaces; j++) {
        cout << ' ';
    }
    spaces--;
    for (int k = 1; k <= sharp; k++) {
        cout << '#'; 
    }
    sharp++;
    cout << endl;
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
