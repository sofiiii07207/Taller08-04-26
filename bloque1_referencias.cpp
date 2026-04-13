#include <iostream>
using namespace std;

void aplicarDescuento(double& saldo, double porcentaje){
    saldo = saldo - (saldo * porcentaje);
}

void intercambiar(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    double saldo = 1500.00;
    double& ref = saldo;

    ref = 2000.00;

    cout << "saldo = " << saldo << endl; // ? 2000
    cout << "ref = " << ref << endl; // ? 2000 tambien

    cout << endl;

    double cuenta = 500.00;
    aplicarDescuento(cuenta, 0.10);
    cout << "Saldo final: " << cuenta << endl; // ? 450

    cout << endl;

    int x = 15, y = 42;
    intercambiar(x, y);
    cout << "x = " << x << ", y = " << y << endl; // ? x = 42, y = 15

    return 0;
}
