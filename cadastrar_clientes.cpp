#include <iostream>
#include <string>
using namespace std;
/*
1- Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma
estrutura de registro para a construção deste cadastro.

2- Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar
nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e
finalizar. OBS: Deve-se utilizar um vetor de registros na solução.
*/
struct clientes
{
    string identidade, nome, endereco, telefone;
};

int main()
{
    int i, leitura = 0;
    char continua = 's';
    clientes cadastroDeClientes[20];
    for (i = 0; i < 20; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Adicione o cliente: " << i + 1 << endl;
        cout << "Identidade: ";
        getline(cin, cadastroDeClientes[i].identidade);
        cout << "Nome: ";
        getline(cin, cadastroDeClientes[i].nome);
        cout << "Endereco: ";
        getline(cin, cadastroDeClientes[i].endereco);
        cout << "Telefone: ";
        getline(cin, cadastroDeClientes[i].telefone);
        cout << "-----------------------------" << endl;
        leitura += 1;
        cout << "Deseja cadastrar mais? sim 's' nao 'n' " << endl;
        cin >> continua;
        cin.ignore();
        if (continua == 'n')
        {
            break;
        }
    }
    for (i = 0; i < leitura; i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Resultado cliente : " << i + 1 << endl;
        cout << "Identidade: ";
        cout << cadastroDeClientes[i].identidade << endl;
        cout << "Nome: ";
        cout << cadastroDeClientes[i].nome << endl;
        cout << "Endereco: ";
        cout << cadastroDeClientes[i].endereco << endl;
        cout << "Telefone: ";
        cout << cadastroDeClientes[i].telefone << endl;
        cout << "-----------------------------" << endl;
    }
    return 0;
}