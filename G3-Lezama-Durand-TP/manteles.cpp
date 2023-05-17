/**
 * Project Untitled
 */


#include "manteles.h"

/**
 * manteles implementation
 */


/**
 * @param tamanio
 * @param liso
 * @param decoracion
 * @param color
 * @param materia
 * @param cantidad
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */
manteles::manteles(string nom,enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad,
			unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca, enum formaMantel forma):
			Vajilla(nom, liso, decoracion, color, tamanio, material, cantidad, stock, precio_producto, codigo_producto, Marca) {

}
manteles::~manteles() {

}

void manteles::set_forma(enum formaMantel forma)
{
	this->forma = forma;
	return;
}

unsigned int manteles::get_forma()
{
	return this->forma;
}
