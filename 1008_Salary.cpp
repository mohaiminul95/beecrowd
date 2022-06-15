#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeNo, workingHour;
    float hourRate, salary;
    cin >> employeeNo;
    cin >> workingHour;
    cin >> hourRate;
    salary = workingHour * hourRate;
    cout << "NUMBER = " << employeeNo << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
    return 0;
}