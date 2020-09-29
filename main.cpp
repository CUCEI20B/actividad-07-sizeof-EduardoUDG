#include <iostream>

using namespace std;

int main() {
    string cadena;


    getline(cin, cadena);
    if(cadena == "char"){
        cout << sizeof(char) << endl;
    } else if(cadena == "int"){
        cout << sizeof(int) << endl;
    } else if(cadena == "short"){
        cout << sizeof(short) << endl;
    } else if(cadena == "float"){
        cout << sizeof(float) << endl;
    } else if(cadena == "double"){
        cout << sizeof(double) << endl;
    } else if(cadena == "long"){
        cout << sizeof(long) << endl;
    }

    return 0;
}