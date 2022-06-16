#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int p1Code, p2Code, p1Unit, p2Unit;
    float p1Price, p2Price, total;
    cin >> p1Code >> p1Unit >> p1Price;
    cin >> p2Code >> p2Unit >> p2Price;
    total = (p1Unit*p1Price)+(p2Unit*p2Price);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}