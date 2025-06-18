#include<iostream>
#include<string>
using namespace std;
/*
Criar um programa que gera uma sugestão de nome de usuário (login) para uma pessoa, com base no seu primeiro nome e no seu sobrenome.
O nome de usuário será formado pela primeira letra do primeiro nome, seguida pelo sobrenome completo.
*/
int main(){
    string primeiroNome, segundoNome, username = " ";

    cout << "Digite o seu primeiro nome: ";
    getline(cin, primeiroNome);

    cout << "Digite o seu segundo nome: ";
    getline(cin, segundoNome);

    username = primeiroNome[0];
    username += segundoNome;

    cout << "Sugestao de username: " << username;

    return 0;
}