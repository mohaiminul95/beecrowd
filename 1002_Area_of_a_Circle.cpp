#include<iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    double R, A, n= 3.14159;
    cin >> R;
    A = n*pow(R,2);
    cout << "A=" << fixed << setprecision(4) << A << endl;
    return 0;
}