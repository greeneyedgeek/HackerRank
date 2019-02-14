#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.length() << ' ' << b.length() << endl;
    cout << a << b << endl;

    char temp = a.at(0);
    a.at(0) = b.at(0);
    b.at(0) = temp;
    cout << a << ' ' << b << endl;

    return 0;
}

