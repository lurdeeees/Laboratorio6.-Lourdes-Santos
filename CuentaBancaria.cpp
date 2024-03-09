#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class CuentaBancaria{
private:
    string nombretitular;
    float saldo;
    int numerodecuenta;

public:
    CuentaBancaria(string nomb,float saldoini,int num) {
        nombretitular = nomb;
        saldo = saldoini;
        numerodecuenta = num;
    }
    void depositar(float precio) {
        saldo = saldo + precio;
        cout << "Se va a depositar Q." << precio << " El saldo actual de la cuenta es: Q." << saldo <<endl;
    }
    void retirar(float precio2) {
        if (saldo >= precio2) {
            saldo = saldo - precio2;
            cout << "Se va a hacer el retiro de Q." << precio2 << " El saldo actual de la cuenta es: Q." << saldo <<endl;
        } else {
            cout << "Su saldo no alcanza para hacer este retiro." <<endl;
        }
    }
    void consultasdeSaldo() {
    	cout <<"Nombre del titular: "<<nombretitular<<endl;
    	cout <<"Numero de la cuenta: "<<numerodecuenta<<endl;
    	cout <<"Saldo Inicial: "<<saldo<<endl;
        cout << "Saldo actual de la cuenta: Q." << saldo <<endl;
    }
};
int main() {
	
    float precio, precio2;
    cout<<"Ingresar la cantidad para depositar: ";
	cin>>precio;
	cout<<"Ingresar la cantidad para retirar: ";
	cin>>precio2;
    CuentaBancaria cuentaban("Lourdes Santos",6000, 485123);

    cuentaban.consultasdeSaldo();
    cuentaban.depositar(precio);
    cuentaban.retirar(precio2);

    return 0;
}
