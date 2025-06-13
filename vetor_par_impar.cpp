#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitados.
*/
int main()
{
    int vetor[3];
    int i;
    char res;

    for (i = 0; i <= 2; i++)
    {
        cout << "Digite valores: " << endl;
        cin >> vetor[i];
    }

    cout << "Voce quer ver os valores pares ou impares? 'i' para impar e 'p' para pares" << endl;
    cin >> res;

    if (res == 'p')
    {
        for (i = 0; i <= 2; i++)
        {
            if (vetor[i] % 2 == 0)
            {
                cout << vetor[i] << endl;
            };
        }
    }
    else
    {
        if (res == 'i')
        {
            for (i = 0; i <= 2; i++)
            {
                if (vetor[i] % 2 != 0)
                {
                    cout << vetor[i] << endl;
                }
            }
        }

        return 0;
    }
}
