#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string const chemin("C:/Users/maxim/Desktop/Perso/source.txt");
    ofstream monFlux(chemin.c_str(), ios::app);
    ifstream myFlux(chemin.c_str());
    if (monFlux)
    {
        int position(monFlux.tellp());
        cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;
        // monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        // monFlux << 42.1337 << endl;
        // int age(36);
        // monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    // if (myFlux)
    // {
    //     string ligne;
    //     while (getline(myFlux, ligne))
    //     {
    //         cout << ligne << endl;
    //     }
    // }
    // else
    // {
    //     cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    // }
    return 0;
}