#include <iostream>

using namespace std;

void multiplicacion()
{
    int a, b;
    cout << "Ingrese el primer numerio:";
    cin >> a;
    cout << "Ingrese el segundo numerio:";
    cin >> b;
    cout << "El resultado de la multiplicacion es: " << a << " * " << b << " = " << a * b << endl;        
}

void resta(){
    int a;
    int b;
    cout << "\033[2J\033[H";
    cout<<"ingrese numero 1: "<<endl;
    cin>>a;

    cout<<"ingrese numero 2: "<<endl;
    cin>>b;

    cout<<"la resta es: "<< a - b <<endl; 
    system("pause");
    cout << "\033[2J\033[H";
}

void suma()
{
    int a;
    int b;
    cout << "\033[2J\033[H";
    cout<<"ingrese numero 1: "<<endl;
    cin>>a;

    cout<<"ingrese numero 2: "<<endl;
    cin>>b;

    cout<<"la resta es: "<< a + b <<endl; 
    system("pause");
    cout << "\033[2J\033[H";
}

int main()
{
    multiplicacion();
    resta();
    suma();
    cout << "Fin del programa" << endl;
    return 0;
}