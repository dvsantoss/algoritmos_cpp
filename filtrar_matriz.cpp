#include <iostream>
using namespace std;
/*
Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores
da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A
(quando for igual a A, insira um 0). Mostre os resultados.
*/
int main()
{
    int A;
    int M[3][3]; // matrizes (3,3) para economizar meu tempo :/
    int X[3][3];
    int l, c;
    int valoresIguais = 0;
    cout << "Digite um numero inteiro: " << endl;
    cin >> A;
    for (l = 0; l < 3; l++) // lendo as matrizes
    {
        for (c = 0; c < 3; c++)
        {
            cout << "Digite os elementos da matriz: " << endl;
            cout << "Linha: " << l << " na coluna: " << c << " = ";
            cin >> M[l][c];
            X[l][c] = M[l][c];
        }
    }
    cout << "Resultado: " << endl;
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++) // exibindo valores
        {
            if (X[l][c] == A) // zerar se for igual ao número contido em A
            {
                X[l][c] = 0;
                cout << "Linha: " << l << " na coluna: " << c << " = ";
                cout << X[l][c] << endl;
                valoresIguais += 1; // contador de valores iguais
            }
            else
            {
                cout << "Linha: " << l << " na coluna: " << c << " = ";
                cout << X[l][c] << endl;
            };
        }
    }
    cout << "Valores iguais = " << valoresIguais;
    return 0;
}