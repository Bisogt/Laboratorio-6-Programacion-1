#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int year_lanzamiento;

public:
    Pelicula(string t, string d, int year) {
        titulo = t;
        director = d;
        year_lanzamiento = year;
    }

    void ingTitulo(string t) {
        titulo = t;
    }

    void ingDirector(string d) {
        director = d;
    }

    void ingYear_lanzamiento(int year) {
        year_lanzamiento = year;
    }

    string egTitulo() {
        return titulo;
    }

    string egDirector() {
        return director;
    }

    int egYear_lanzamiento() {
        return year_lanzamiento;
    }

    void datos() {
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de lanzamiento: " << year_lanzamiento << endl;
    }
};

int main() {
    Pelicula peli("Donde estan las rubias", "Keenen Ivory Wayans", 2004);

    peli.datos();
    peli.ingDirector("Keenen Ivory Wayans");
    peli.datos();

    return 0;
}

