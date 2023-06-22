#include <iostream>
#include <conio.h>
#include <locale.h>
#include <vector>
#include "funções.cpp"

using namespace std;



int main(){
     setlocale(LC_ALL, "");

     setlocale(LC_ALL, "");

    bool sair = false;

    while (!sair) {



        opcoes();

        if (op1 == 1) {
            signUp();
        } else if (op1 == 2) {
            signIn();
        } else if (op1 == 3) {
            cout << "Saindo..." << endl;
            sair = true;
        } else {
            cout << "Op��o inv�lida." << endl;
            system("PAUSE");
        }

        cout << endl;
    }

    return 0;

}


