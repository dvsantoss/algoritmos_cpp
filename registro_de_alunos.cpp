#include <iostream>
using namespace std;
/*
Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,
endereço e média geral.
Após o preenchimento, deve ser somado o valor 0,5 às médias de todos os alunos que tiveram médias maiores que 5.
Em seguida escreva o vetor final.
*/
struct alunos
{
    int matricula;
    string nome;
    float mediaGeral;
};

// diminui o tamanho da struct para entender melhor :)

int main()
{
    alunos ufrn[3]; // 10 alunos
    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "Digite o aluno " << i + 1 << endl;
        cout << "Matricula:" << endl;
        cin >> ufrn[i].matricula;
        cin.ignore();
        cout << "Nome:" << endl;
        getline(cin, ufrn[i].nome);
        cout << "Media geral:" << endl;
        cin >> ufrn[i].mediaGeral;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Matricula do aluno: " << ufrn[i].matricula << endl;
        cout << "Nome do aluno: " << ufrn[i].nome << endl;
        if (ufrn[i].mediaGeral > 5)
        {
            ufrn[i].mediaGeral += 0.5;
            cout << "Media geral do aluno: " << ufrn[i].mediaGeral << endl;
        }
        else
        {
            cout << "Media geral do aluno: " << ufrn[i].mediaGeral << endl;
        }
    }

    return 0;
}