#include <iostream>
#include <string>

using namespace std;

class Estudiante{
	private:
		string nombre;
		string apellido;
		string curso;
	    int edad;
	    string seccion;
	    
	
	public:
	    Estudiante(string n, string a, int e, string c, string s ){
	        nombre = n;
	        apellido = a;
	        edad= e;
	        curso = c;
	        seccion = s;
	        
	    };
	        void mostrarInfo(){
	            cout<<"Nombre: "<< nombre <<" Apellido: "<< apellido <<" Edad: "<< edad <<" Curso: "<< curso << "Seccion: "<< seccion<< endl;
	        };
};

int main(){
    Estudiante estudiante1("Luisa","Martinez",19, "Fisica ","B");
	Estudiante estudiante2("Lordes","Santos",20, "Programacion ","A");
	Estudiante estudiante3("Fabiola","Guzman",21, "Lenguaje a2","B");
    
    
    cout<<"Informacion del estudiante 1: "<<endl;
    estudiante1.mostrarInfo();
    cout<<"Informacion del estudiante 2: "<<endl;
    estudiante2.mostrarInfo();
    cout<<"Informacion del estudiante 3: "<<endl;
    estudiante3.mostrarInfo();
    
}
