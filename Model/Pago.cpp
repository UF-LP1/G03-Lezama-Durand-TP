/**
 * Project Untitled
 */


#include "Pago.h"

/**
 * Pago implementation
 */


/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
Pago::Pago(enum Metodos metodo_pago, unsigned int monto, unsigned int numero_de_orden):numero_de_orden(numero_de_orden) {
    this->metodo_pago = metodo_pago;
    this->monto = monto;
}
Pago::~Pago() {

}

/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 * @return void
 */
void Pago::efectuar_pago(int metodo_pago, int monto, unsigned int numero_de_orden) {// luego amigo fran 
    return;
}

/**
 * @return unsigned int
 */
unsigned int Pago::get_numero_orden() {
    return this->numero_de_orden;
}
