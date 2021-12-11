/*
Napisz program obliczający sumę elementów umieszczonych na głównej
przekątnej tablicy dwuwymiarowej, składającej się z 5×5 liczb
całkowitych.
*/
#include <iostream>

using namespace std;

int main()
{
    int tablica[5][5];
    int przekatna = 0;
    for (int i = 0; i < 5; i++) {
        cout << endl;
        for (int i2 = 0; i2 < 5; i2++) {
            tablica[i][i2] = i+i2+1;
            if(i==i2) przekatna += tablica[i][i2];
            cout << tablica[i][i2] << " ";
        }
    }

    cout << endl << "Suma przekatnej wynosi: " << przekatna;

}
