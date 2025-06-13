#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos
de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante.
*/
int main()
{

    int V1[10];
    int V2[10];
    int V3[10];
    int i;

    for (i = 0; i < 9; i++)
    {
        cout << "DIGITE V1:  ";
        cin >> V1[i];
    }

    for (i = 0; i < 9; i++)
    {
        cout << "DIGITE V2:  ";
        cin >> V2[i];
    }

    cout << "---------------" << endl;

    for (i = 0; i < 9; i++)
    {
        V3[i] = V1[i] * V2[i];
    }

    for (i = 0; i < 9; i++)
    {
        cout << "Resultado de " << V1[i] << " * " << V2[i] << " = " << V3[i] << endl;
    }

    return 0;
}
