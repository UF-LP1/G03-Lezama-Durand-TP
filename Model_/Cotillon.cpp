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
Cotillon::Cotillon(unsigned int stock, unsigned int precio, unsigned int cod, string marca): 
	producto(stock,precio,cod,marca){
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
