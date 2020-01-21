#include <iostream>
#include "poly.h"
#include "frac.h"

using namespace std;

int main(){
    float ind;
    float x;
    float x2;
    float x3;
    float x4;
    int num;
    int denom;
    cout << "ingrese el coeficiente de x2 del primer polinomio" << endl;
    cin >> x;
    cout << "ingrese el coeficiente de x del primer polinomio" << endl;
    cin >> x2;
    cout << "ingrese el termino independiente del primer polinomio" << endl;
    cin >> ind;
    Poly c1(0, 0, x2, x, ind);
    cout << "ingrese el coeficiente de x2 del segundo polinomio" << endl;
    cin >> x;
    cout << "ingrese el coeficiente de x del segundo polinomio" << endl;
    cin >> x2;
    cout << "ingrese el termino independiente del primer polinomio" << endl;
    cin >> ind;
    Poly c2(0,0,x2, x, ind);

    Poly c3 = c1 + c2;
    Poly c4 = c1 - c2;
    Poly c5 = c1 * c2;
    Poly c6 = c1/c2;

    cout << "suma" << endl;
    cout << c3 << endl;
    cout << "resta" << endl;
    cout << c4 << endl;
    cout << "multiplicacion" << endl;
    cout << c5 << endl;
    cout << "division" << endl;
    cout << c6 << endl;

    /* Se solicita el ingreso de la primera fraccion */
    cout << "ingrese el numerador de la primera fraccion" << endl;
    cin >> num;
    cout << "ingrese el denominador de la primera fraccion" << endl;
    cin >> denom;
    Frac f1(num, denom);
    /* Se solicita el ingreso de la segunda fraccion */

    cout << "ingrese el numerador de la segunda fraccion" << endl;
    cin >> num;
    cout << "ingrese el denominador de la segunda fraccion" << endl;
    cin >> denom;
    Frac f2(num, denom);

    Frac f3 = f1+f2;
    Frac f4 = f1-f2;
    Frac f5 = f1*f2;
    Frac f6 = f1/f2;

    cout << f3 << endl;
    cout << f4 << endl;
    cout << f5 << endl;
    cout << f6 << endl;

    return 0;
}