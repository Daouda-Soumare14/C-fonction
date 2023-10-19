#include <iostream>
using namespace std;

double carre(double x)
{
    double nombre; // la variable nombre dans la fonction est different de la variable nombre dans le main()
    nombre = x*x;
    return nombre;
}

int main()
{
    double nombre, carreNombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    carreNombre = carre(nombre); //On utilise la fonction

    cout << "Le carre de " << nombre << " est " << carreNombre << endl;
    return 0;
}