#include <iostream>
#include <string>

using namespace std;

int main()
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