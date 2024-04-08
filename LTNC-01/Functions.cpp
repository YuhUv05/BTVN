#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int soLonNhat (int a, int b, int c, int d) {
    int max = a;
    if (b > a && b > c && b > d) {
        max = b;
    }
    else if (c > a && c > b && c > d) {
        max = c;
    }
    else if (d > a && d > b && d > c) {
        max = d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = soLonNhat(a,b,c,d);
    cout << "So lon nhat la: " << res;
    return 0;
}
