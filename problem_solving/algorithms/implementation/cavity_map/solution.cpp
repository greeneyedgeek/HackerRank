#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
  int length = grid.size();
  int current, left, right, up, down;
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (i > 0 && i < length - 1 && j > 0 && j < length - 1) {
        current = grid[i][j];
       
        left = grid[i][j - 1];
        right = grid[i][j + 1];
        up = grid[i-1][j];
        down = grid[i+1][j];

        if (left < current && current > right &&
        up < current && current > down) {
          grid[i][j] = 'X';
        }
      }
    }
  }
  return grid;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<string> grid(n);

  for (int i = 0; i < n; i++) {
    string grid_item;
    getline(cin, grid_item);

    grid[i] = grid_item;
  }

  vector<string> result = cavityMap(grid);

  for (int i = 0; i < result.size(); i++) {
    fout << result[i];

    if (i != result.size() - 1) {
      fout << "\n";
    }
  }

  fout << "\n";

  fout.close();

  return 0;
}
