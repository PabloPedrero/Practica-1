#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x, y, z;
    cout << "Escriba un numero: ";
    cin >> x;
    cout << "Introduzca el segundo numero: ";
    cin >> y;
    z = x + y;
    cout << "La suma " << x << " mas " << y << " es igual a " << z << "." << endl;
    
    return 0;
}