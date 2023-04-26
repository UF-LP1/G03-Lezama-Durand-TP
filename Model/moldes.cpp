/**
 * Project Untitled
 */


#include "moldes.h"

/**
 * moldes implementation
 */


/**
 * @param clasificacion
 * @param tamanio
 * @param material
 * @param stock
 * @param codigo_producto
 * @param precio
 * @param marca
 */
moldes::moldes(enum tipo clasificacion, unsigned int tamanio, string material, unsigned int stock, unsigned int cod,
    unsigned int precio, string marca) :Reposteria(stock, cod, marca, precio) {
    this->clasificacion = clasificacion;
    this->tamanio = tamanio;
    this->material = material;
   
}
moldes::~moldes() {

}

/**
 * @return unisgned int
 */
unsigned int moldes::get_tamanio() {
    return this->tamanio;
}

/**
 * @param material
 * @return void
 */
void moldes::set_material(unsigned int material) {
    this->material = material;
    return;
}