#include <iostream>
#include <string.h>

using namespace std;

class Pelicula{
	private:
		string titulo;
	    string director;
	    int fechalanzamiento;
	    
	
	public:
	    Pelicula(string t,   string d,  int fl){
	        titulo = t;
	        director = d;
	        fechalanzamiento = fl;
	    };
	        void mostrarInfo(){
	            cout<<"Titulo de la pelicula: "<< titulo <<" Director: "<< director <<" Fecha de lanzamiento: "<< fechalanzamiento <<endl;
	        };
};

int main(){
    Pelicula pelicula1("El perro perdido" , "Antonieta de las Nieves", 2000);
    Pelicula pelicula2("El perro perdido","Raul Silva", 2020);
    Pelicula pelicula3("Las flores de mama","Lourdes Santos", 2023);
    
    
    cout<<"Informacion de la Pelicula: "<<endl;
    pelicula1.mostrarInfo();
    cout<<"Informacion de la Pelicula: "<<endl;
    pelicula2.mostrarInfo();
    cout<<"Informacion de la Pelicula: "<<endl;
    pelicula3.mostrarInfo();
    
}