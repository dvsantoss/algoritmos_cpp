#include <iostream>
using namespace std;

struct endereco
{
    int numero;
    string rua;
};

void receberStruct(endereco *casa1);

int main()
{
    endereco casa1;
    casa1.numero = 200;
    casa1.rua = "Rua C++";

    cout << "rua antes da função: " << casa1.rua << endl;
    cout << "numero antes da função: " << casa1.numero << endl;

    receberStruct(&casa1);

    cout << "rua depois da função: " << casa1.rua << endl;
    cout << "numero depois da função: " << casa1.numero << endl;

    return 0;
}

void receberStruct(endereco *casa1)
{
    casa1->rua = "Rua JavaScript";
    casa1->numero = 404;
}
