#include <iostream>
using namespace std;

int main()
{

    int tamanho, i, x, maior;

    cout << "Digite o tamanho do vetor" << endl;
    cin >> tamanho;

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        cout << "Digite a posicao " << i << " do vetor." << endl;
        cin >> vetor[i];
    }

    for (x = 0; x < tamanho - 1; x++)
    {
        for (i = 0; i < tamanho - x - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                maior = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = maior;
            }
        }
    }
    cout << "--------------------------" << endl;
    for (i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}