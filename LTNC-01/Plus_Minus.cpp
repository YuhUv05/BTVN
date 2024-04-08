#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++)
cin >> a[i];

float positive = 0;
float negative = 0;
float zero = 0;
for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
        positive++;
    }
    if (a[i] < 0) {
        negative++;
    }
    if (a[i] == 0) {
        zero++;
    }
}
float positiveRate = positive / n;
float negativeRate = negative / n;
float zeroRate = zero / n;
cout << fixed << setprecision(6) << positiveRate << endl
     << fixed << setprecision(6) << negativeRate << endl
     << fixed << setprecision(6) << zeroRate << endl;
return 0;
}
