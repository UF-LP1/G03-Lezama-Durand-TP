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
Pago(unsigned int monto_p, carrito*& carro);
~Pago();
/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
virtual string efectuar_pago()=0;
carrito*& get_carrito();
unsigned int get_numero_orden();
virtual void imprimir() = 0;

   
protected:
    unsigned int monto;
    const unsigned int numero_de_orden;
    carrito* carro;
};

#endif //_PAGO_H