/**
 * Project Untitled
 */


#include "producto.h"

/**
 * producto implementation
 */


/**
 * @param stock
 * @param precio
 * @param cod
 */
producto::producto(unsigned int stock, unsigned int precio, unsigned int cod, string marca):codigo_producto(cod){
    this->stock = stock;
    this->precio_producto = precio;
    this->Marca = marca;
}

/**
 * @param cantidad
 * @param stock
 * @return void
 */
void producto::renovar_stock( unsigned int stock) {
    this->stock = stock;
    return;
}

/**
 * @return unsigned int
 */
unsigned int producto::get_stock() {
    return this->stock;
}

/**
 * @return unsigned int
 */
unsigned int producto::get_codigo_producto() {
    return this->codigo_producto;
}

/**
 * @return unsigned int
 */
unsigned int producto::get_precio_producto() {
    return this->precio_producto;
}

producto::~producto() {

}