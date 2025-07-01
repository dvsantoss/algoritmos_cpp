#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    int *pointP;
    pointP = &p;
    int **pointPP;
    pointPP = &pointP;

    //------Coisas diferentes:

    cout << p << endl;
    cout << &p << endl;

    //---------------------------

    cout << pointP << endl;
    cout << &pointP << endl;

    //---------------------------

    cout << pointPP << endl;
    cout << &pointPP << endl;
    return 0;
}
/*

apontar o valor da variavel
apontar o endereço da variavel
apontar o valor atraves do ponteiro
apontar o endereço atraves do endereço

----------------------------------------

funções

> Passagem de parametros por valor ou copia

> Passagem de parâmetro por refencia

> Passagem por ponteiro (pass by pointer)

passando a variavel no parametro da função

*/