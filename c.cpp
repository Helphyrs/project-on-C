#include <iostream>
#include <cmath>
#include "math.h"
using namespace std;

int calc()
{
    int a, b, result, resultMult, resultModu;
    cout << "Donner un premier nombre entier ?" << endl;
    cin >> a;
    cout << "Donner un premier nombre entier ?" << endl;
    cin >> b;
    result = a + b, resultMult = a * b, resultModu = (a + b) % 2;
    cout << "addition : " << result << " multiplication : " << resultMult << " modulo : " << resultModu << endl;
    return 0;
}

int main()
{
    double const nombre(16);

    double resultatSqrt = sqrt(nombre);
    cout << "La racine de " << nombre << " est " << resultatSqrt << endl;

    double a(0), b(0);

    cout << "Bienvenue dans le programme de calcul de a^b !" << endl;

    cout << "Donnez une valeur pour a : ";
    cin >> a;

    cout << "Donnez une valeur pour b : ";
    cin >> b;

    double const resultat(pow(a, b));
    cout << a << " ^ " << b << " = " << resultat << endl;

    int nombreRecu = 3;
    int newResult = ajouteDeux();
    int resultatAjouteDeux = ajouteDeux(nombreRecu);
    cout << "Le résultat de ajouteDeux(" << nombreRecu << ") est " << resultatAjouteDeux << endl;
    cout << "Le résultat de ajouteDeux(" << "rien" << ") est " << newResult << endl;

    return 0;
}