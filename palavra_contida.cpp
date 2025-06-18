#include <iostream>
#include <string>
using namespace std;
/*
Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se
a palavra está contida na frase.
Entradas: “esta é a frase” e “frase”
Saída: a palavra “frase” está contida na frase “esta é a frase”.
*/
int main()
{
    string frase, palavra, palavraCompleta;
    int i, resultado, tamanhoFrase;

    cout << "Digite a frase: ";
    getline(cin, frase);
    cout << "Digite a palavra: ";
    getline(cin, palavra);

    resultado = frase.find(palavra);

    tamanhoFrase = frase.length();

    for (i = resultado; frase[i] != ' ' && i < tamanhoFrase; i++)
    {
        palavraCompleta = palavraCompleta + frase[i];
    }

    if (palavra == palavraCompleta)
    {
        cout << "A palavra " << palavraCompleta << " Esta contida na frase.";
    }
    else
    {
        cout << "A palavra > " << palavra << " < NAO Esta contida na frase.";
    }

    return 0;
}