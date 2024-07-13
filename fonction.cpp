#include <iostream>

using namespace std;

int ajouteDeux(int nombreRecu)
{
    int valeur(nombreRecu + 2);
    return valeur;
}
int main()
{
    int a(2), b(2);
    cout << "Voici la valeur de a : " << a << endl;
    cout << "Voici la valeur de b : " << b << endl;

    b = ajouteDeux(a);

    cout << "Voici la valeur de a : " << a << endl;
    cout << "Voici la valeur de b : " << b << endl;
    return 0;
}