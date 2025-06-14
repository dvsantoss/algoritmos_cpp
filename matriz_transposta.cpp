#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova matriz que seja a matriz transposta da primeira (troque as linhas por colunas).
*/
int main()
{
    int matriz[3][3];
    int matrizTransposta[3][3];
    int l, c; // l = linha, c = coluna :)
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++) // lendo toda a matriz original
        {
            cout << "Escreva a linha: " << l << " na coluna: " << c << endl;
            cin >> matriz[l][c];
        }
    }
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            matrizTransposta[l][c] = matriz[c][l]; // Formando a matriz composta
        }
    }

    cout << "Matriz original: " << endl;

    for (l = 0; l < 3; l++) // exibindo a matriz original
    {
        for (c = 0; c < 3; c++)
        {
            cout << "[" << l << "]" << "[" << c << "]" << " = " << matriz[l][c] << endl;
        }
    }

    cout << "Matriz Transposta: " << endl;

    for (l = 0; l < 3; l++) // exibindo a matriz composta
    {
        for (c = 0; c < 3; c++)
        {
            cout << "[" << l << "]" << "[" << c << "]" << " = " << matrizTransposta[l][c] << endl;
        }
    }

    return 0;
}