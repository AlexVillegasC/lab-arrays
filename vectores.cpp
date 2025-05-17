#include<iostream>

using namespace std;

int suma(int a, int b)
{
   
    std::cout << "Ingrese el primer numero: ";       
    std::cin >> a;
    
    std::cout << "Ingrese el segundo numero: "; 
    cin >> b;

    cout << "La suma de " << a << " + " << b << " es: " << (a + b) << endl;

    return a + b;
}

int main ()
{

    int a, b;

 
    suma(a, b);
  
    return 0;
}