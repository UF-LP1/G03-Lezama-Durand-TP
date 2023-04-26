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
Reposteria::Reposteria(unsigned int stock, unsigned int cod, string marca, unsigned int precio):producto(stock, precio, cod, marca) {

}

Reposteria::~Reposteria() {

}
