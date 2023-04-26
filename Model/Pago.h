/**
 * Project Untitled
 */


#ifndef _PAGO_H
#define _PAGO_H
#include "Header.h"
#include "Metodos.h"

class Pago {
public: 
    
/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
Pago(enum Metodos metodo_pago, unsigned int monto, unsigned int numero_de_orden);
~Pago();
/**
 * @param metodo_pago
 * @param monto
 * @param numero_de_orden
 */
void efectuar_pago(int metodo_pago, int monto, unsigned int numero_de_orden);
    
unsigned int get_numero_orden();
   
private: 
    enum Metodos metodo_pago;
    unsigned int monto;
    const unsigned int numero_de_orden;
};

#endif //_PAGO_H