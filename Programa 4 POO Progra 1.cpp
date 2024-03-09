#include <iostream>
#include <string>
// Para el cuarto programa se nos solicita hacer une cuenta bancaria
using namespace std;
// la clase cuenta_banco representa la cuenta de banco, que tiene
// datos como el titular, numero de cuenta y el saldo
class cuenta_banco{
	private:
		string nombre_titular;
		string numero_cuenta;
		double saldo;
		
	public:
		cuenta_banco(string nombre, string numero, double saldo_actual){
			nombre_titular = nombre;
			numero_cuenta = numero;
			saldo = saldo_actual;
		}
	// en esta sección podremos ver el depósito que realiza hacía la cuenta de banco.	
	void deposito (double monto){
		saldo += monto;
		cout << "Deposito de " << monto << " realizado con exito" << endl;
	}
	// en esta sección podremos retirar dinero de la cuenta siempre y cuando el saldo sea mayor
	// que la cantidad a retirar
	void retiro(double monto){
		if (saldo >= monto){
			saldo -= monto;
			cout << "Retiro de " << monto << " realizado con exito" << endl;
		} else {
			cout << "Saldo insuficiente" << endl;
		}
	}
	// consultar el saldo de la cuenta 
	double consulta_saldo(){
		return saldo;
	}
};
// la funcion principal muestra los datos de la cuenta de banco.
int main(){
	cuenta_banco cuenta("Byron Salazar", "213455", 500.00);
	cuenta.deposito(500.00);
	cuenta.retiro(200.00);
	
	cout << "Saldo actual: " << cuenta.consulta_saldo() << endl;
	return 0;
}
