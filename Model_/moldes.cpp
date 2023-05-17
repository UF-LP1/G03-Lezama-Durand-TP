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

unsigned int moldes::get_clasificacion()
{
    return this->clasificacion;
}

/**
 * @param material
 * @return void
 */
void moldes::set_material(unsigned int material) {
    this->material = material;
    return;
}

void moldes::set_tamanio(unsigned int tam)
{
    this->tamanio = tam;
    return;
}


void moldes::set_clasificacion(enum tipo clas)
{
    this->clasificacion = clas; 
    return;
}

unsigned int moldes::get_material()
{
    return;this->material;
}
