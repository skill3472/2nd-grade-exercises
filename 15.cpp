#include<iostream>

using namespace std;

int main ()
{
    int n, i;
    float x, w;

    cout << "Podaj stopien wielomianu:" << endl;
    cin >> n;

    float * a;
    a = new float[n+1];

    cout << "Podaj X:" << endl;
    cin >> x;

    cout << "Podaj wspolczynniki:" << endl;
    for (i=0; i<=n; i++)
    cin >> a[i];

    w=a[0];

    for (i=1; i<=n; i++)
    w=w*x+a[i];

    cout<<"Wynik to "<<w<<endl<<endl;
}
