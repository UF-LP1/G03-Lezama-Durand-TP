/**
 * Project Untitled
 */


#include "Pago.h"
#include "carrito.h"

/**
 * Pago implementation
 */


/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
Pago::Pago(unsigned int monto_p,carrito*& carro) :numero_de_orden(carro->get_ID()) {
    this->monto =monto_p;
    this->carro = new carrito();
    this->carro = carro;
}

Pago::~Pago(){
    delete this->carro;

}

/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 * @return void
 */


carrito*& Pago::get_carrito()
{
    return this->carro;
}

/**
 * @return unsigned int
 */
unsigned int Pago::get_numero_orden() {
    return this->numero_de_orden;
}


