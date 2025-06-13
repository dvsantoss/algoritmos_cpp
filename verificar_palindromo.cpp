#include <iostream>
#include <string>
#include <cctype> // para verificar se certa posição é letra e deixar a palavra em letras minusculas
using namespace std;
/*
Elabore um algoritmo que leia uma string, verifique e informe se trata-se ou não de um palíndromo.
Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda quanto da esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.
*/
int main()
{
    string palavra, palavraLimpa = "", verifica; // palavra limpa para eliminar os espaços
    int i, tamanhoDaPalavra;

    cout << "Digite a palavra: " << endl;
    getline(cin, palavra);

    tamanhoDaPalavra = palavra.size();

    for (i = 0; i < tamanhoDaPalavra; i++)
    {
        if (isalpha(palavra[i]))
        {
            palavraLimpa += tolower(palavra[i]);
        }
    }

    tamanhoDaPalavra = palavraLimpa.size();

    for (i = tamanhoDaPalavra - 1; i >= 0; i--)
    {
        verifica += palavraLimpa[i];
    }

    if (palavraLimpa == verifica)
    {
        cout << "A palavra é Palindromo" << endl;
    }
    else
    {
        cout << "A palavra não é um Palindromo" << endl;
    }
}