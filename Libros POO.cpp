#include <iostream>
#include <string>

using namespace std;

class libro{
private:
	string titulo;
    string autor;
    int capitulos;
    int fecha;
    

public:
    libro(string a, int c, int fe, string t){
        autor = a;
        capitulos = c;
        fecha= fe;
        titulo = t;
    };
        void mostrarInfo(){
            cout<<"Autor: "<< autor <<" Capitulos: "<< capitulos <<" Fecha: "<< fecha <<" titulo: "<< titulo <<endl;
        };
};

int main(){
    libro libro1("Gustavo Guzman",10, 2002,"El amor imposible");
    libro libro2("Juan Santos",15,1878,"La vida de Lourdes");
    libro libro3("Pedro Cuevas",20,2023,"El Tik Tok mas famoso");
    
    
    cout<<"Informacion del libro 1: "<<endl;
    libro1.mostrarInfo();
    cout<<"Informacion del libro 2: "<<endl;
    libro2.mostrarInfo();
    cout<<"Informacion del libro 3: "<<endl;
    libro3.mostrarInfo();
    
}