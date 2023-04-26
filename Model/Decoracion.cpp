/**
 * Project Untitled
 */


#include "Decoracion.h"

/**
 * Decoracion implementation
 */


/**
 * @param stock
 * @param codigo
 * @param marca
 * @param art
 * @param precio
 */
Decoracion::Decoracion(unsigned int stock, unsigned int cod, string marca, enum Decoracion_Reposteria art, unsigned int precio):
            Reposteria(stock, cod, marca, precio) {

}

Decoracion::~Decoracion() {

}

/**
 * @return enum Decoracion_reposteria
 */
unsigned int Decoracion::get_articulo() {
    return this->articulo; 
}

/**
 * @param tipo
 * @return void
 */
void Decoracion::set_articulo(enum Decoracion_Resposteria articulo) {
    this->articulo= articulo;
    return;
}