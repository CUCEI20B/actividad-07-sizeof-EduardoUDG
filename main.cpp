#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char caracter;
    int entero;
    short corto;
    float racional;
    double doble;
    long largo;

    getline(cin, cadena);
    if(cadena == "char"){
        cout << sizeof(char) << endl;
    }
    fflush(stdin);

    getline(cin, cadena);
    if(cadena == "int"){
        cout << sizeof(int) << endl;
    }
    fflush(stdin);

    getline(cin, cadena);
    if(cadena == "corto"){
        cout << sizeof(short) << endl;
    }
    fflush(stdin);

    getline(cin, cadena);
    if(cadena == "racional"){
        cout << sizeof(float) << endl;
    }
    fflush(stdin);

    getline(cin, cadena);
    if(cadena == "doble"){
        cout << sizeof(double) << endl;
    }
    fflush(stdin);

    getline(cin, cadena);
    if(cadena == "largo"){
        cout << sizeof(long) << endl;
    }


    return 0;
}