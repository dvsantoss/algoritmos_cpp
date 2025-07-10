#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    int *pointP;
    pointP = &p;
    int **pointPP;
    pointPP = &pointP;

    //------Coisas diferentes:

    cout << p << endl;
    cout << &p << endl;

    //---------------------------

    cout << pointP << endl;
    cout << &pointP << endl;

    //---------------------------

    cout << pointPP << endl;
    cout << &pointPP << endl;
    return 0;
}
/*

apontar o valor da variavel
apontar o endereço da variavel
apontar o valor atraves do ponteiro
apontar o endereço atraves do endereço

----------------------------------------

funções

> Passagem de parametros por valor ou copia

> Passagem de parâmetro por refencia

> Passagem por ponteiro (pass by pointer)

passando a variavel no parametro da função

*/

//--------------------------------------------

/*

Coisas para a prova:

Função retornando todos os tipos  // Retorne o vetor para o chamador
Ponteiros de todas as formas
Passagem de parâmetros de todas as formas

Videos do Youtube

Estudem para próxima monitoria e pra chegar na aula já tendo uma base:

https://www.youtube.com/watch?v=uB3Gm0QrgRw&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=22

https://www.youtube.com/watch?v=tPsc2WckHc4&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=23

https://www.youtube.com/watch?v=cIZLMjlgmbU&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=24

https://www.youtube.com/watch?v=KuipEEelnpU&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=25

https://www.youtube.com/watch?v=QrDY5OXfqkE&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=36

https://www.youtube.com/watch?v=80k9pgIhw8I&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=37

https://www.youtube.com/watch?v=TYFlzcRmNRY&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=38

*/