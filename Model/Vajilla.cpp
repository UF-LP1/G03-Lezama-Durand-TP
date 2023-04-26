/**
 * Project Untitled
 */


#include "Vajilla.h"

/**
 * Vajilla implementation
 */


/**
 * @param impresion
 * @param liso
 * @param decoracion
 * @param color
 */
Vajilla::Vajilla(bool liso, string decoracion, string color, enum Tamanios tam, string material,
    unsigned int cantidad_por_tamanio, unsigned int stock, unsigned int precio, unsigned int cod,
    string marca) : producto(stock, precio, cod, marca) {

    this->liso = liso;
    this->decoracion = decoracion;
    this->color = color;
    this->tam = tam;
    this->material = material;
    this->cantidad_por_unidad = cantidad_por_tamanio;
}

Vajilla::~Vajilla() {

}

/**
 * @return unsigned int
 */
unsigned int Vajilla::get_precio() {
    return this->precio_producto;
}

/**
 * @param cantidad
 * @param stock
 * @return void
 */
void Vajilla::set_stock(unsigned int cantidad) {
    this->stock = cantidad;
    return;
}