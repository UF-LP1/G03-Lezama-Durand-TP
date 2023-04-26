/**
 * Project Untitled
 */


#include "carrito.h"

/**
 * carrito implementation
 */


/**
 * @param cant
 * @param monto
 * @param ID
 */
carrito::carrito(unsigned int cant, unsigned int monto, unsigned int ID){
    this->cant_de_productos = cant;
    this->monto_total = monto;
    this->IDcarrito = ID;

}
carrito::~carrito(){

}
/**
 * @return unsigned int
 */
unsigned int carrito::get_monto() {
    return this->monto_total;
}

/**
 * @return unsigned int
 */
unsigned int carrito::get_cant_prod() {
    return this->cant_de_productos;
}

/**
 * @param cantProd
 * @return void
 */
void carrito::set_cant_prod(unsigned int cantProd) {
    this->cant_de_productos = cantProd;
    return;
}

/**
 * @param montoFinal
 * @return void
 */
void carrito::set_monto_total(unsigned int montoFinal){//lo hacemos despues porque lleva toda una analigia de fondo //tqm fran
    
    return;
}