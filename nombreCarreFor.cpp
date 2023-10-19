#include <iostream>
using namespace std;

double carre(double x)
{
    double resultat;
    resultat = x*x;
    return resultat;
}

int main()
{
    for(int i = 0; i < 20; i++)
    {
        cout << "Le carre de " << i << " = " << carre(i) << endl;
    }
    
    return 0;
}