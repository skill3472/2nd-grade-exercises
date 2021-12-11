#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << endl << "Podaj b: ";
    cin >> b;
    cout << "NWD(" << a << "," << b << ") = ";
    while (a != b)
    {
        if (a < b) b -= a;
        else a -= b;
    }
    cout << a << endl;
}
