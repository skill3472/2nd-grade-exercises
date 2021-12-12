#include <iostream>

using namespace std;

int suma(int liczba)
{
    int wynik = 0;
    do
    {
        wynik = wynik + liczba % 10;
        liczba = liczba / 10;
    }
    while(liczba != 0);
    return wynik;
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    if(suma(a) > suma(b)) cout << endl << "Suma cyfr liczby " << a << " jest wieksza." << endl;
    else if(suma(a) < suma(b)) cout << endl << "Suma cyfr liczby " << b << " jest wieksza." << endl;
    else cout << endl << "Suma cyfr tych liczb jest sobie rowna." << endl;
}
