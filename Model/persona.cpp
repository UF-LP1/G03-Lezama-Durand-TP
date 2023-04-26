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