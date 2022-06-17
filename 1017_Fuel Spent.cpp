#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int hour, speed;
    double liters;
    cin >> hour;
    cin >> speed;
    liters = (hour*speed)/12.0;
    cout << fixed << setprecision(3) << liters << endl;
    return 0;
}