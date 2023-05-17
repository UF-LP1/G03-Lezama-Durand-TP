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
Decoracion::Decoracion(string nom, unsigned int stock, unsigned int cod, string marca, enum Decoracion_Resposteria art, unsigned int precio, string cantidad) :
    Reposteria(nom, stock, cod, marca, precio) {

    this->articulo= art;
    this->cantidad = cantidad;

}

Decoracion::~Decoracion() {

}

/**
 * @return enum Decoracion_reposteria
 */
unsigned int Decoracion::get_articulo() {
    return this->articulo; 
}

string Decoracion::get_cantidad()
{
    return this->cantidad;
}
void Decoracion::set_cantidad(string cant)
{
    this->cantidad = cant;
    return;
}

/**
 * @param tipo
 * @return void
 */
void Decoracion::set_articulo(enum Decoracion_Resposteria articulo) {
    this->articulo= articulo;
    return;
}