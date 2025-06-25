#include <iostream>
using namespace std;
/*
7. Escreva uma função chamada Troca que troque os valores dos parâmetros
recebidos. Essa função não deve ter retorno.
*/
void Troca(int *num1, int *num2);
int main()
{

    int A;
    int B;

    A = 10;
    B = 20;

    cout << "A antes da funcao = " << A << endl; // 10
    cout << "B antes da funcao = " << B << endl; // 20

    // chamada da função void troca

    Troca(&A, &B);

    cout << "A Depois da funcao = " << A << endl; // 10
    cout << "B Depois da funcao = " << B << endl; // 20

    return 0;
}

void Troca(int *num1, int *num2)
{
    int c;
    c = *num1;
    *num1 = *num2;
    *num2 = c;
}