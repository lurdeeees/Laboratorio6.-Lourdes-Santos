#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Calculadora {
	private:
	    int val1;
	    int val2;
	
	public:
	    Calculadora(int v1, int v2) {
	        val1 = v1;
	        val2 = v2;
	    }
	    int suma() {
	        return val1 + val2;
	    }
	    int resta() {
	        return val1 - val2;
	    }
	    int multiplicacion() {
	        return val1 * val2;
	    }
	    float division() {
	        if (val2 != 0) {
	            return (val1) / val2;
	        } else {
	            cout << "Error: division es dentro de cero" <<endl;
	            return 0;
	        }
	    }
};

int main() {
	int a, b;
	cout<<"Ingresar primer numero: ";
	cin>>a;
	cout<<"Ingresar segundo numero: ";
	cin>>b;
    Calculadora calcu(a, b);

    cout << "El resultado de la suma es: " << calcu.suma() <<endl;
    cout << "El resultado de la Resta es: " << calcu.resta() <<endl;
    cout << "El resultado de la Multiplicacion es: " << calcu.multiplicacion() <<endl;
    cout << "El resultado de la Division es: " << calcu.division() <<endl;

    return 0;
}