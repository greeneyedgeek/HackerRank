#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    stringstream ss1, ss2;
    int hour, min, sec;
    char c;
    ss1 << s;
    ss1 >> hour >> c >> min >> c >> sec;
    if (hour == 12) {hour = 0;}
    if (s.find("PM") != std::string::npos) {
        hour += 12;
    }
    ss2 << setw(2) << setfill('0') << hour << ':' 
        << setw(2) << setfill('0') << min << ':' 
        << setw(2) << setfill('0') << sec;     
    return ss2.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
