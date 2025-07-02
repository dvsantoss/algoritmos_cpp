#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia um numero inteiro entre 1 e 10, calcule e mostre o seu fatorial. Para tanto, implemente duas funções: 1 validarNumero: recebe o número e retorna true se for válido e false se não for. 2 calcularFat: recebe o número e calcula o seu fatorial.
*/
bool validarNumero(int num);
int calcularFat(int num);

int main(){
    int num;
    cout << "Digite numero: " << endl;
    cin >> num;
    if(validarNumero(num)){
        cout << num << "! = " << calcularFat(num) << endl;
    }else{
        cout << "Numero invalido!" << endl;
    }
    return 0;
}

bool validarNumero(int num){
    return ((num >= 1 && num <= 10));
}

int calcularFat(int num){
    int i;
    int aux = 1;
    for(i = 1; i <= num; i++){
        aux *= i;
    }
    return aux;
}