#include <iostream>

using namespace std;
int muliplicacion(int a, int b)
{
    int a, b;
    cout << "Ingrese el primer numerio:";
    cin >> a;
    cout << "Ingrese el segundo numerio:";
    cin >> b;
    cout << "El resultado de la multiplicacion es: " << a << " * " << b << " = " << muliplicacion(a, b) << endl;
    return 0;
    return a * b;
}
int main()
{
    muliplicacion(a, b);
    return 0;
}