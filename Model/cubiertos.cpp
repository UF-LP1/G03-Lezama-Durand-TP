/**
 * Project Untitled
 */


#include "cubiertos.h"

/**
 * cubiertos implementation
 */


/**
 * @param tam
 * @param liso
 * @param decoracion
 * @param color
 * @param material
 * @param cantidad
 * @param tipo
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */
cubiertos::cubiertos(enum clasificacion tipo, enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad,
    unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca) :
    Vajilla(liso, decoracion, color, tamanio, material, cantidad, stock, precio_producto, codigo_producto, Marca){

    this->tipo = tipo;
}
cubiertos::~cubiertos() {

}
/**
 * @param tipo
 * @return void
 */
void cubiertos::set_tipo(enum clasificacion tipo) {
    this->tipo = tipo;
    return;
}

/**
 * @return enum clasificacion
 */
enum clasificacion cubiertos::get_tipo() {
    return this->tipo;
}