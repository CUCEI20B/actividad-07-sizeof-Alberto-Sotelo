#include <iostream>

using namespace std;

int main() {

string dato; //Variable tipo cadena que tomara los datos de entrada 
cin >> dato; // Se pide el dato 

//Uso de condicionales para imprimir los bits acorde
//al dato que ingrese el usuario usando 'sizeof()'

if (dato == "char")
{
    cout << sizeof(char)<<endl;
}else if(dato == "int")
{
    cout << sizeof(int)<< endl;
}else if (dato == "short")
{
    cout << sizeof(short)<< endl;
}else if (dato == "float")
{
    cout << sizeof(float)<< endl;
}else if (dato == "double")
{
    cout << sizeof(double) << endl;
}else if (dato == "long")
{
    cout<< sizeof(long) << endl;
}    
    return 0;
}
