#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int const nombreNotes(6);
    double notes[nombreNotes];

    notes[0] = 12.5;
    notes[1] = 19.5;
    notes[2] = 6.;
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;

    double moyenne(0);
    for (int i(0); i < nombreNotes; ++i)
    {
        moyenne += notes[i];
    }

    moyenne /= nombreNotes;

    cout << "Votre moyenne est : " << moyenne << endl;

    int const value(5);
    int array[value];

    for (int i(0); i < value; i++)
    {
        cout << "Entrez une valeur pour la case " << i << " : " << endl;
        cin >> array[i];
    }
    for (int i(0); i < value; i++)
    {
        if (i % 2 == 0)
        {
            array[i] = 0;
        }
    }
    for (int i(0); i < value; i++)
    {
        cout << "case" << i << " : " << array[i] << endl;
    }
    return 0;
}

double moyenne(double tableau[], int tailleTableau)
{
    double moyenne(0);
    for (int i(0); i < tailleTableau; ++i)
    {
        moyenne += tableau[i];
    }
    moyenne /= tailleTableau;

    return moyenne;
}