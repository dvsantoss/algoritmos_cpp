#include <iostream>
#include <string>
using namespace std;
void receberString(string *str);
int main()
{
    string str = "TADS";
    
    cout << "str antes da função: " << str << endl;
    
    receberString(&str);
    
    cout << "str depois da função: " << str << endl;

    return 0;
}

void receberString(string *str){
    *str += "-UFRN";
}