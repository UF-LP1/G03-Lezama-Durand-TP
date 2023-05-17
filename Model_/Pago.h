/**
 * Project Untitled
 */


#ifndef _PAGO_H
#define _PAGO_H
#include "Header.h"
#include "carrito.h"

class Pago {
public: 
    
/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
Pago(carrito*& carro);
~Pago();
/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
 virtual void efectuar_pago()=0;
 carrito*& get_carrito();
unsigned int get_numero_orden();
   
protected:
    unsigned int monto;
    const unsigned int numero_de_orden;
    carrito* carro;
};

#endif //_PAGO_H