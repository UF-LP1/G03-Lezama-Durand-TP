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

string encargado::cobrar()
{
    string metodo_pago;
    cout << "ingrese el metodo de pago:" << endl;
    cout << "1)Aplicacion" << endl;
    cout << "2)Tarjeta" << endl;
    cout << "3)Efectivo" << endl;
    cin >> metodo_pago;
    return metodo_pago;
}

string encargado::envolver_regalo()
{
    string x = "Su regalo esta envuelto";
    return x;
}

/**
 * @param monto
 * @return string
 */


/**
 * @param regalo
 */


/**
 * @param horario
 * @return void
 */
void encargado::set_horario(string horario){
    this->horario=horario;
    return;
}

