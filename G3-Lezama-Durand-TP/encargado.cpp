/**
 * Project Untitled
 */


#include "encargado.h"

/**
 * encargado implementation
 */


/**
 * @param nombre
 * @param DNI
 * @param horario
 */
encargado::encargado(const string nombre, const unsigned int DNI, string horario, string Contacto):persona(nombre, DNI, Contacto){
    this->horario = horario;
    
}
encargado::~encargado()
{

}

unsigned int encargado::cobrar()
{
    unsigned int metodo_pago;
    cout << "ingrese el metodo de pago:" << endl;
    cout << "1)Aplicacion" << endl;
    cout << "2)Efectivo" << endl;
    cout << "3)Tarjeta" << endl;
    cin >> metodo_pago;

    return metodo_pago;
}

string encargado::envolver_regalo()
{
    string x = "Su regalo esta envuelto";
    return x;
}

void encargado::realizar_pago(unsigned int metodo, unsigned int monto, carrito *&c) {

	do
	{
		if (metodo == 1)
		{
			string nombreapp;
			cout << "¿Con que app desea pagar?" << endl;;
			cin >> nombreapp;

			Aplicacion app(monto, nombreapp, c);
			app.imprimir();
		}
		else if (metodo == 2)
		{
			unsigned int monto_i;
			cout << "el monto es: " << monto << " ingrese su efectivo: " << endl;
			cin >> monto_i;
			
			while (monto_i < monto) {
				cout << "falta dinero, el monto es: $"<<monto<<" le devolvemos su dinero, ingrese de nuevo su efectivo: " << endl;
				cin >> monto_i;
			}

			efectivo dinero(monto, monto_i, c);
			dinero.imprimir();
		}
		else if (metodo == 3)
		{
			string n_tarjeta, banco;
			unsigned int cod;
			cout << "Ingrese en nombre de la tarjeta" << endl;
			cin >> n_tarjeta;
			cout << "Ingrese el banco" << endl;
			cin >> banco;
			cout << "Ingrese su codigo de seguridad" << endl;
			cin >> cod;
			Tarjeta tar(monto, n_tarjeta, banco, cod, true, c);
			tar.imprimir();
		}
	} while (metodo != 1 && metodo != 2 && metodo != 3);
}


/**
 * @param horario
 * @return void
 */
void encargado::set_horario(string horario){
    this->horario=horario;
    return;
}

