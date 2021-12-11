#include <iostream>

using namespace std;

int main()
{
    float wzrost, bmi;
    double waga;
    cout << "Prosze, podaj swoja wage (kg):" << endl;
    cin >> waga;
    cout << endl << "Prosze, podaj swoj wzrost (m)" << endl;
    cin >> wzrost;
    bmi = waga /( wzrost * wzrost );
    cout << endl << "Twoje bmi wynosi: " << bmi << endl;

    return 0;
}
