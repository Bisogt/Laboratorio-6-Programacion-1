#include <iostream>
#include <string>

using namespace std;
// La clase estudiante contiene los datos de los estudiantes, como métodos
class estudiante {
	private:
		string nombre;
		string apellido;
		int edad;
		string curso;
// consta de metodos publicos y privados.		
	public:
		estudiante(string n, string a, int e, string c){
			nombre = n;
			apellido = a;
			edad = e;
			curso = c;
		}
		// esta sección establece los datos del estudiante
		void ingNombre(string n){
			nombre = n;
			}
		void ingApellido(string a){
			apellido = a;
		}
		void ingEdad(int e){
			edad = e;
		}
		void ingCurso(string c){
			curso = c;
		}
		// se obtienen los datos del estudiante retornandolo.
		string egNombre(){
			return nombre;
		}
		string egApellido(){
			return apellido;
		}
		int egEdad(){
			return edad;
		}
		string egCurso(){
			return curso;
		}
		// método para mostrar la información del estudiante
		void datos(){
			cout << "Nombre: " << nombre << endl;
			cout << "Apellido: " << apellido << endl;
			cout << "Edad: " << edad << endl;
			cout << "Curso: " << curso << endl;
		}
};
// la funcion principal es la encargada de mostrar los datos
int main(){
	estudiante estudiante1("Byron","Salazar", 19, "Programacion ");
	estudiante1.datos();
	estudiante1.ingCurso("Programacion 1");
	estudiante1.datos();
	
	return 0;
}
