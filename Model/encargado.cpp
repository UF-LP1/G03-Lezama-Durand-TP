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
encargado::encargado(const string nombre, const unsigned int DNI, string horario, string Contacto):persona(nombre, DNI, Contacto) {
    this->horario = horario;
}
encargado::~encargado() {

}

/**
 * @param monto
 * @return string
 */
string encargado::cobrar(unsigned int monto) {//luego 
    return "";
}

/**
 * @param regalo
 */
void encargado::envolver_regalo(producto regalo) {//luego

}

/**
 * @param horario
 * @return void
 */
void encargado::set_horario(string horario){
    this->horario=horario;
    return;
}