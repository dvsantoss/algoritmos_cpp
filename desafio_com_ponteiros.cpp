#include <iostream>
using namespace std;

void modificarFragmento(int *ptrFragmentos, int *ptrFragmentosModificados, int tamanho);

int main()
{
    int tamanho = 5;
    int fragmentos[tamanho]{1, 2, 3, 4, 5};
    int fragmentosModificados[tamanho];
    // int *ptrFragmentosModificados;
    for (int i = 0; i < tamanho; i++)
    {
        cout << fragmentos[i] << endl;
    }

    cout << "-------------------------" << endl;

    modificarFragmento(fragmentos, fragmentosModificados, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << fragmentosModificados[i] << endl;
    }
    return 0;
}

void modificarFragmento(int *ptrFragmentos, int *ptrFragmentosModificados, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(ptrFragmentosModificados + i) = *(ptrFragmentos + i) * 2;
    }
}
