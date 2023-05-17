/**
 * Project Untitled
 */


#include "cartel.h"

/**
 * cartel implementation
 */


/**
 * @param codigo
 * @param stock
 * @param precio
 * @param marca
 * @param texto
 */
cartel::cartel(string texto, unsigned int stock, unsigned int precio, unsigned int cod, string marca):Cotillon(stock, precio, cod, marca) {
    this->stock = stock;
    this->Marca = marca;
    this->precio_producto = precio;
    this->texto = texto;
    
}
cartel::~cartel() {

}
/**
 * @param texto
 * @return void
 */
void cartel::set_texto(string texto) {
    this->texto = texto;
    return;
}