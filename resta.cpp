#include<iostream>
using namespace std;

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

int main(){
    resta();
    return 0;
}