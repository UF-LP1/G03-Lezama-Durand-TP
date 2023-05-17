/**
 * Project Untitled
 */


#include "Cotillon.h"

/**
 * Cotillon implementation
 */


/**
 * @param clasificacion
 * @param codigo
 * @param stock
 * @param precio
 * @param marca
 */
Cotillon::Cotillon(string nom, unsigned int stock, unsigned int precio, unsigned int cod, string marca) :
	producto(nom, stock, precio, cod, marca) {
}

Cotillon::~Cotillon() {

}

void Cotillon::set_clasificacion(enum tipo_cotillon tipo)
{
	this->clasificacion = tipo;
	return;
}

int Cotillon::get_clasificacion()
{
	return this->clasificacion;
}
