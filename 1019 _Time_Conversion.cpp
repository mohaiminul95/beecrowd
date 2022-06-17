#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int seconds, hours, minutes;
    cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;
    cout << hours << ":" << int(minutes%60) << ":" << int(seconds%60) << endl;
    return 0;
}