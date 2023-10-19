#include <iostream>
#include <string>
using namespace std;

int addition(int a, int b)
{
    return a+b;
}

double multiplication(double a, double b, double c)
{
    return a*b*c;
}

string demanderNom()
{    
     cout << "Entrez votre nom : ";
     string nom;
     getline(cin, nom);
     return nom;
}

int main()
{
    cout << "somme : "<< addition(2,4) <<endl;

    cout << "produit : "<< multiplication(2,4,2) <<endl;

    cout << "vous vous appellez : "<< demanderNom() <<endl;
    return 0;
}