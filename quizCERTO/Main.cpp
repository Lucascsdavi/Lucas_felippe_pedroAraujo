#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "Funcoes.cpp"

using namespace std;


int main() {
    int choice;
    bool loggedIn = false;
    string loggedInUsername, loggedInName;

    do {
        cout << "Escolha uma opção:\n";
        cout << "1. Registrar (Sign Up)\n";
        cout << "2. Entrar (Login)\n";
        cout << "3. Sair\n";
        cout << "Digite sua escolha: ";

        while (!(cin >> choice)) {
            cout << "Opção inválida. Tente novamente.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer do teclado

        switch (choice) {
            case 1:
                signUp();
                break;
            case 2:
                loggedIn = login(loggedInUsername, loggedInName);
                break;
            case 3:
                cout << "Encerrando o programa.\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }

        if (loggedIn) {
            cout << "Login bem-sucedido!\n";
            cout << "Usuário logado: " << loggedInName << " (" << loggedInUsername << ")\n";
            loggedIn = false;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}