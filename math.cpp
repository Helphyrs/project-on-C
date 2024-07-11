#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double const nombre(16);

    double resultatSqrt;

    resultatSqrt = sqrt(nombre);

    cout << "La racine de " << nombre << " est " << resultatSqrt << endl;

    double a(0), b(0);

    cout << "Bienvenue dans le programme de calcul de a^b !" << endl;

    cout << "Donnez une valeur pour a : ";
    cin >> a;

    cout << "Donnez une valeur pour b : ";
    cin >> b;

    double const resultat(pow(a, b));

    cout << a << " ^ " << b << " = " << resultat << endl;
    return 0;
}