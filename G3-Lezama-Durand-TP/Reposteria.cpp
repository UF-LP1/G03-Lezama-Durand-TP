/**
 * Project Untitled
 */


#include "Reposteria.h"

/**
 * Reposteria implementation
 */


/**
 * @param stock
 * @param codigo
 * @param marca
 * @param precio_producto
 */
Reposteria::Reposteria(string nom, unsigned int stock, unsigned int cod, string marca, unsigned int precio):producto(nom, stock, precio, cod, marca) {
}

Reposteria::~Reposteria() {

}

void Reposteria::set_articulos( articulos art) {
	this->art = art;
	return;
}
articulos Reposteria::get_articulos() {
	return this->art;
}