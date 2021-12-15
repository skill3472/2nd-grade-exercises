/*
Z ciągu n liczb naturalnych wypisz liczby, których suma cyfr jest większa
od 100. W programie wykorzystaj funkcję suma_cyfr(liczba), która obliczy
sumę cyfr liczby podanej jako parametr. W celu obliczenia wartości cyfry
skorzystaj z możliwości obliczenia reszty z dzielenia przez 10.
*/
#include <iostream>

using namespace std;

int suma_cyfr(int liczba)
{
    int s = 0;
    while (liczba != 0)
    {
        s += (liczba % 10);
        liczba = liczba / 10;
    }
    return s;
}

int main()
{
    int n;
    cout << "Podaj wspolczynnik n: ";
    cin >> n;
    cout << endl;
    for (int i = 1; i < n; i++) {
        if(suma_cyfr(i) > 100) cout << i << endl;
    }
}
