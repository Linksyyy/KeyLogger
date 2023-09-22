#include <stdio.h>
#include <iostream>
#include<string>

using namespace std;
int main() {
	string nome_Arquivo;

	cout << "New name to archive 'KeyLogger.exe': ";
	getline (cin, nome_Arquivo);
    nome_Arquivo += ".exe";

	const char *CnomeArquivo = nome_Arquivo.c_str();

	int value = rename("KeyLogger.exe", CnomeArquivo);

    if (!value)
    {
        printf("%s", "File name changed successfully");
    }
    else
    {
        perror("Error");
    }
    system("PAUSE");
    return 0;
}