#include <iostream>
using namespace std;

//descobrindo qual número mais se repete em um vetor, e tratando caso de empate.

int main()
{
    int array[]{7, 2, 3, 9, 7, 7, 7, 9, 9};
    int cont, qtdRepeticao = 0, numeroMaisRepetido = 0, empate = 0;

    for (int i = 0; i < 9; i++)
    {
        cont = 0;
        for (int j = 0; j < 9; j++)
        {
            if (array[i] == array[j])
            {
                cont++;
            }
        }

        if (cont > qtdRepeticao)
        {
            qtdRepeticao = cont;
            numeroMaisRepetido = array[i];
            empate = 0;
        }
        else if (cont == qtdRepeticao && array[i] != numeroMaisRepetido)
        {
            empate = 1;
        }
    }

    if (qtdRepeticao == 1 || empate == 1)
    {
        cout << "Não existe moda nesse array." << endl;
    }
    else
    {
        cout << "O número: " << numeroMaisRepetido << " se repetiu: " << qtdRepeticao << " vezes!" << endl;
    }

    return 0;
}
