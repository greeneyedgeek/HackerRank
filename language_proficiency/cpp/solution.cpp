#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;


        cout << hex << showbase << left << nouppercase;
        cout << (long) A << endl;

        cout << dec << setprecision(2) << right << fixed << setw(15) << setfill('_') << showpos;
        cout << B << endl;

        cout << scientific << setprecision(9) << noshowpos << uppercase;
        cout << C << endl;

	}
