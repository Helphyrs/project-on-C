#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<double> notes;

    notes.push_back(12.5);
    notes.push_back(19.5);
    notes.push_back(6);
    notes.push_back(12);
    notes.push_back(14.5);
    notes.push_back(15);

    double moyenne(0);
    for (int i(0); i < notes.size(); ++i)

    {
        moyenne += notes[i];
    }

    moyenne /= notes.size();

    cout << "Votre moyenne est : " << moyenne << endl;
    return 0;
}
