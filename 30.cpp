#include <iostream>

using namespace std;

int silnia(int n)
{
    int wynik = 1;
    for (int i = n; i > 1; i--) {
        wynik *= i;
    }
    return wynik;
}

int main()
{
    int a;
    cin >> a;
    cout << silnia(a);
}
