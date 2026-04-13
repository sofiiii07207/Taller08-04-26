#include <iostream>
using namespace std;

void aplicarIVA(double* precio, double iva){
    *precio = *precio + (*precio * iva); // forma más simple
}

int main(){

    int stock = 250;
    int* p = &stock;

    cout << stock << endl; // 250
    cout << p << endl; // direccion
    cout << *p << endl; // 250

    *p = 180;
    cout << stock << endl; // 180

    cout << endl;

    double precio = 100;
    aplicarIVA(&precio, 0.12);
    cout << precio << endl; // 112

    cout << endl;

    int contador = 10;

    // referencia
    contador = contador + 5;

    // puntero
    int* p2 = &contador;
    *p2 = *p2 + 5;

    cout << contador << endl; // 20

    return 0;
}
