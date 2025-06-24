#include <iostream>
using namespace std;
/*
Faça uma função que recebe um número inteiro por parâmetro e retorna
verdadeiro se ele for par e falso se for ímpar.
*/
bool parOuImpar(int a);

int main()
{
    int inteiro;
    cout << "Digite um inteiro: ";
    cin >> inteiro;

    bool resultado = parOuImpar(inteiro);

    cout << "Resultado em 0 ou 1: " << resultado << endl;

    if (resultado)
    {
        cout << "Numero par!" << endl;
    }
    else
    {
        cout << "Numero impar!" << endl;
    }

    return 0;
}

bool parOuImpar(int a)
{
    return (a % 2 == 0);
}