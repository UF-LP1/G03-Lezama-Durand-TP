/**
 * Project Untitled
 */


#include "persona.h"

/**
 * persona implementation
 */


/**
 * @param nombre
 * @param DNI
 * @param contacto
 */
persona::persona(string nombre, unsigned int DNI, string contacto):nombre(nombre), DNI(DNI) {
	this->contacto = contacto;
}

persona::~persona() {

}

string persona::get_nombre()
{
	return this->nombre;
}

unsigned int persona::get_DNI()
{
	return this->DNI;
}

void persona::set_contacto(string cont)
{
	this->contacto = cont;
	return;
}
string persona::get_contacto()
{
	return this->contacto;
}
