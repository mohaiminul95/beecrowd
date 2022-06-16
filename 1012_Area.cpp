#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, pi=3.14159;
    cin >> A >> B >> C;
    cout << "TRIANGULO: " << fixed << setprecision(3) << (A*C)/2 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << pow(C, 2)*pi << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A+B)/2)*C << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << pow(B, 2) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << A*B << endl;
    return 0;
}