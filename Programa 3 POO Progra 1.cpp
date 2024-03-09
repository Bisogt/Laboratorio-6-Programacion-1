#include <iostream>
// Para este programa tenemos una calculadora programada con orientaci�n a objetos
using namespace std;
// la clase calculadora pide el ingreso de dos numetos
class calculadora {
private:
    double num1;
    double num2;
// cuenta con metodos publicos y privados para su uso
public:
    calculadora(double numero1, double numero2) {
        num1 = numero1;
        num2 = numero2;
    }
// en esta secci�n establecemos las operaciones, retornando los resultados
    double suma() {
        return num1 + num2;
    }

    double resta() {
        return num1 - num2;
    }

    double multiplicacion() {
        return num1 * num2;
    }
// para la divisi�n tomamos en cuenta que no se puede dividir en 0
    double division() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "No se puede dividir entre 0" << endl;
            return 0;
        }
    }

};
// la funci�n principal nos muestra el resultado de las operaciones
// tambi�n se realiza el ingreso de datos
int main() {
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    calculadora calcular(num1, num2);

    cout << "Suma: " << calcular.suma() << endl;
    cout << "Resta: " << calcular.resta() << endl;
    cout << "Multiplicacion: " << calcular.multiplicacion() << endl;
    cout << "Division: " << calcular.division() << endl;

    return 0;
}

