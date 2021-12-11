#include <iostream>

using namespace std;

int a = 5;

void druga()
{
	cout << "Wartosc zmiennej: " << a << endl;
}

int main() {
	cout << "Wartosc zmiennej: " << a << endl;
	int a = 73;
	cout << "Wartosc zmiennej: " << a << endl;
	{
		int a = -3;
		cout << "Wartosc zmiennej: " << a << endl;
	}
	cout << "Wartosc zmiennej: " << a << endl;
	druga();
}
