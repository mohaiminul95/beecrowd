#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double fixedSalary, saleAmount, finalSalary;
    cin >> name >> fixedSalary >> saleAmount;
    finalSalary = fixedSalary+(saleAmount*15)/100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << finalSalary << endl;
    return 0;
}