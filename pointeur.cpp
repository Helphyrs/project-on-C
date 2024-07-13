#include <iostream>
#include <cmath>
#include "math.h"
using namespace std;

int main()
{
    int ageUtilisateur(16);
    int newAge(3);
    int *ptr(0), *pta(0);

    ptr = &ageUtilisateur;
    pta = &newAge;
    cout << ptr << endl;
    cout << pta << endl;
    cout << *ptr << *pta << endl;

    return 0;
}
