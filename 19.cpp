#include <iostream>

using namespace std;

const int n = 10;

int liczby[n];

void wprowadzDane()
{
	int i;
	cout << "Ilosc liczb: " << n << "\n";
	for (i = 0; i < n; i++)
	{
		cout << "Podaj liczbe nr " << i << " (musi byc >= od liczby podanej poprzednio ): ";
		cin >> liczby[i];
	}
}

int znajdzDana(int wartosc)
{
	int poczatek, koniec, srodek;
	poczatek = 0;
	koniec = n;
	do
	{
		srodek = (poczatek + koniec) / 2;
		if (liczby[srodek] == wartosc)
			return srodek;
		else
		{
			if (wartosc < liczby[srodek]) koniec = srodek - 1;
			else poczatek = srodek + 1;
		}
	} while (poczatek <= koniec);
	return -1;
}

int main() {
	int wartosc, pozycja;
	wprowadzDane();
	cout << "\n Podaj liczbe do wyszukania:"; cin >> wartosc;
	pozycja = znajdzDana(wartosc);
	if (pozycja >= 0) cout << "\nZnaleziono wartosc " << wartosc << " na pozycji nr " << pozycja;
	else cout << "\nNie znaleziono wartosci " << wartosc;
}
