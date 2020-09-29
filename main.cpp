#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    string cadena;


    getline(cin, cadena);
    if(cadena == "char"){
        cout << sizeof(char) << endl;
    }
    getline(cin, cadena);
    if(cadena == "int"){
        cout << sizeof(int) << endl;
    }
    getline(cin, cadena);
    if(cadena == "short"){
        cout << sizeof(short) << endl;
    }
    getline(cin, cadena);
    if(cadena == "float"){
        cout << sizeof(float) << endl;
    }
    getline(cin, cadena);
    if(cadena == "double"){
        cout << sizeof(double) << endl;
    }
    getline(cin, cadena);
    if(cadena == "long"){
        cout << sizeof(long) << endl;
    }

    return 0;
}