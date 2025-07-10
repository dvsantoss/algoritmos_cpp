#include <iostream>
using namespace std;
//enunciado no final para melhor leitura do código
void modificarFragmento(int *ptrFragmentos, int *ptrFragmentosModificados, int tamanho);

int main()
{
    int tamanho = 5;
    int fragmentos[tamanho]{1, 2, 3, 4, 5};
    int fragmentosModificados[tamanho];
    // int *ptrFragmentosModificados;
    for (int i = 0; i < tamanho; i++)
    {
        cout << fragmentos[i] << endl;
    }

    cout << "-------------------------" << endl;

    modificarFragmento(fragmentos, fragmentosModificados, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << fragmentosModificados[i] << endl;
    }
    return 0;
}

void modificarFragmento(int *ptrFragmentos, int *ptrFragmentosModificados, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(ptrFragmentosModificados + i) = *(ptrFragmentos + i) * 2;
    }
}

/*

🏝️ Desafio: A Ilha dos Desafios – O Amuleto das Memórias
Contexto

Você é um aventureiro preso em uma ilha misteriosa chamada Ilha dos Desafios. Para escapar, precisa recuperar partes perdidas da Memória Ancestral, espalhadas em 5 templos mágicos. Cada templo guarda um fragmento de memória escondido dentro de uma estrutura de dados. A única forma de acessar, modificar e combinar essas memórias é usando ponteiros.


🎯 Objetivo
Criar um programa em C++ que:


Armazene 5 valores inteiros (fragmentos de memória) em um vetor.


Use ponteiros para:


Acessar cada valor.


Dobrar o valor de cada fragmento (como forma de "ativá-lo").


Armazenar os novos valores em um vetor separado.


Exibir os dois vetores (antes e depois da ativação).



🧠 Regras da Missão
Use ponteiros para manipular os valores — não pode usar acesso direto com colchetes ([]) na modificação.


Funções com ponteiros são obrigatórias — crie uma função void ativarFragmentos(int* original, int* ativados, int tamanho) para processar os dados.


A entrada dos valores pode ser fixa ou lida pelo usuário.



📥 Exemplo de Execução Esperada
Fragmentos encontrados: 4 7 1 3 8

Fragmentos ativados:   8 14 2 6 16



🧩 Dicas Técnicas
Use int* ptr = vetor; para criar ponteiros.


Use aritmética de ponteiros para navegar pelo vetor: *(ptr + i).


A função ativarFragmentos pode percorrer com laço for usando ponteiros.


*/