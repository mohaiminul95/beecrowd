#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double R, result, pi=3.14159;
    cin >> R;
    result =  (4/3.0) * pi * pow(R, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << result << endl;
    return 0;
}