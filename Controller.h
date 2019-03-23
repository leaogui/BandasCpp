#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

class Controller {

public:
    void comeco()
    {

        int choice;

        cout << "Bem vindo ao programa para listar bandas!\n";

        cout << "Digite o que quer fazer: 1 para adicionar bandas, 2 para listar bandas, 3 para encerrar.\n";

        cout << "Escolha: ";

        cin >> choice;
        

        while (choice < 1 || choice > 3) {

            system("cls");

            cout << "Seu número não está entre 1 e 3.\n";

            cout << "Digite o que quer fazer: 1 para adicionar bandas, 2 para listar bandas, 3 para encerrar.\n";

            cout << "Escolha: ";

            cin >> choice;
        };


        switch (choice) {


        case 1:

            cout << "Adicionar banda\n";

            break;

        case 2:

            cout << "Listar bandas:";

            break;

        case 3:

            cout << "Obrigado por utilizar!\n";

            break;
        }
    };
};
