#include <iostream>
#include <string>
// para el siguiente programa haremos una sección de libros 
using namespace std;
// encontramos la clase libros que engloba los datos de titulo, autor y año de publicacion
class Libro {
	private:
		string titulo;
		string autor;
		int year_publicacion;
	// Aqui asignamos las variables de los datos 	
public:
	Libro(string t, string a, int year){
		titulo = t;
		autor = a;
		year_publicacion = year;
	// estos son los métodos para establecer datos de los libros
	}
	
	void ingTitulo(string t){
		titulo = t;
	}
	
	void ingAutor(string a){
		autor = a;
	}
	
	void ingYear_publicacion(int year){
		year_publicacion = year;
	}
	// estos metodos obtienen los datos de los libros
	string egTitulo(){
		return titulo;
	}
	string egAutor(){
		return autor;
	}
	int egYear_publicacion(){
		return year_publicacion;
	}
	// Se asignan los datos para mostrar la informacion en el libro
	void datos(){
		cout << "Titulo: " << titulo << endl;
		cout << "Autor: " << autor << endl;
		cout << "Anio de publicacion: " << year_publicacion << endl;
	}
};
// el programa principal muestra en la pantalla la clase y los datos
int main(){
	Libro libro1("El principito", "Antoine de Saint-Exupery", 1943);
	
	libro1.datos();
	
	libro1.ingAutor("Gabriel Garcia Marquez");
	
	libro1.datos();
	
	return 0;
}
