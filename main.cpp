#include <iostream>

using namespace std;

int main() {

string dato; //Variable tipo cadena que tomara los datos de entrada 
cin >> dato;

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
}




   
    return 0;
}
