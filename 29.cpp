#include <iostream>

using namespace std;

int even[50];
int licznikEven = 0;
int uneven[50];
int licznikUneven = 0;

void wczytajLiczby()
{
    for (int i = 100; i > 0; i--) {
        if(i % 2 == 0)
        {
            even[licznikEven] = i;
            licznikEven++;
            cout << i << " to liczba parzysta" << endl;
        }
        else
        {
            uneven[licznikUneven] = i;
            licznikUneven++;
            cout << i << " to liczba nieparzysta" << endl;
        }
    }
}

int main()
{
    wczytajLiczby();
}
