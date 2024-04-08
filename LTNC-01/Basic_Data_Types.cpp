#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int n;
    long number;
    char c;
    float s ;
    double t;
    cin >> n >> number >> c >> s >> t;

    cout << n << endl;
    cout << number << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << s << endl;
    cout << fixed << setprecision(9) << t << endl;
    return 0;
}
