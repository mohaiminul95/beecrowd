#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int X;
    float Y, consumption;
    cin >> X;
    cin >> Y;
    consumption = X/Y;
    cout << fixed << setprecision(3) << consumption <<" km/l" << endl;
    return 0;
}