#include <iostream>
using namespace std;

class Calculadora {
private:
    float primero;
    float segundo;

    bool comprobar() {
        return (segundo != 0.0);
    }

public:
    Calculadora() {
        primero = 0.0;
        segundo = 0.0;
    }

    void setNumeros(float a, float b) {
        primero = a;
        segundo = b;
    }

    float getPrimero() { return primero; }
    float getSegundo() { return segundo; }

    float sumar() { return primero + segundo; }
    float restar() { return primero - segundo; }
    float multiplicar() { return primero * segundo; }

    bool dividir(float& resultado) {
        if (comprobar()) {
            resultado = primero / segundo;
            return true;
        }
        return false;
    }
};

int main() {
    Calculadora casio;
    
    int opcion;
    float n1, n2, resDiv;

    do {
        cout << "-----MENU CALCULADURA-----\n";
        cout << "1. Establecer numeros\n";
        cout << "2. Realizar las cuatro operaciones\n";
        cout << "3. Consultar los numeros almacenados\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese el primer numero: ";
                cin >> n1;
                cout << "Ingrese el segundo numero: ";
                cin >> n2;
                casio.setNumeros(n1, n2);
                cout << "¡Numeros guardados correctamente!\n";
                break;

            case 2:
                cout << "\n--- RESULTADOS ---" << "\n";
                cout << "Suma: " << casio.sumar() << "\n";
                cout << "Resta: " << casio.restar() << "\n";
                cout << "Multiplicacion: " << casio.multiplicar() << "\n";
                
                if (casio.dividir(resDiv)) {
                    cout << "Division: " << resDiv << "\n";
                } else {
                    cout << "Division: Error, no se puede dividir entre cero.\n";
                }
                break;

            case 3:
                cout << "\n--- NUMEROS ALMACENADOS ---" << "\n";
                cout << "Primer numero: " << casio.getPrimero() << "\n";
                cout << "Segundo numero: " << casio.getSegundo() << "\n";
                break;

            case 4:
                cout << "\nSaliendo del programa \n";
                break;

            default:
                cout << "\n opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}

