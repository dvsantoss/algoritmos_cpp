#include <iostream>
using namespace std;
/*
1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize
duas funções: uma que determine o maior valor entre as notas (de provas ou de
trabalhos) e outra que calcule a média aritmética das duas maiores notas.
*/

float definirValorMaior(float a, float b);
float mediaAritmetica(float a, float b);

int main()
{
    float prova1, prova2, trabalho1, trabalho2, maiorNotaProva, maiorNotaTrabalho, media;
    cout << "Digite suas duas notas de prova: " << endl;
    cin >> prova1 >> prova2;
    cout << "Agora digite suas duas notas de trabalho: " << endl;
    cin >> trabalho1 >> trabalho2;

    maiorNotaProva = definirValorMaior(prova1, prova2);
    maiorNotaTrabalho = definirValorMaior(trabalho1, trabalho2);

    cout << maiorNotaProva << " e " << maiorNotaTrabalho << endl;

    media = mediaAritmetica(maiorNotaProva, maiorNotaTrabalho);

    cout << media;

    return 0;
}

float definirValorMaior(float a, float b)
{
    return (a > b) ? a : b;
}

float mediaAritmetica(float a, float b)
{
    return (a + b) / 2.0f;
}