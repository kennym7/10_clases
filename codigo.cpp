#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Pelicula {
private:
    string titulo;
    int duracion;
    double precio;

public:
    Pelicula();

    void setTitulo(string& nuevoTitulo);
    void setDuracion(int nuevaDuracion);
    void setPrecio(double nuevoPrecio);

    string getTitulo();
    int getDuracion();
    double getPrecio();

    void mostrarInformacion();
};
Pelicula::Pelicula(){
	titulo = "(Sin título)";
	duracion = 0;
	precio = 0.0;
}
