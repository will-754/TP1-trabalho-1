#include <iostream>
#include "../headers/dominios.h"
#include "dominios.cpp"
#include <locale.h>
//#include "../headers/entidades.h"
//#include "../headers/testes_dominios.h"
//#include "../headers/testes_entidades.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    Codigo teste;
    Telefone telefone;
    teste.setValor("abc123");
    telefone.setValor("+12345678");
    cout << teste.getValor() << endl;
    cout << telefone.getValor() << endl;
    Matricula matricula;
    matricula.setValor("1234567");
    cout << matricula.getValor() << endl;
    Texto texto;
    texto.setValor("o joao eh foda");
    cout << texto.getValor() << endl;
    Data data;
    data.setValor("10/DEZ/2010");
    cout << data.getValor() << endl;

    return 0;
}
