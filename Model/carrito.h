/**
 * Project Untitled
 */


#ifndef _CARRITO_H
#define _CARRITO_H
#include "producto.h"

class carrito {
public:
/**
 * @param cant
 * @param monto
 * @param ID
 */
carrito(unsigned int cant, unsigned int monto, unsigned int ID);
~carrito();

unsigned int get_monto();  
unsigned int get_cant_prod();
/**
 * @param cantProd
 */
void set_cant_prod(unsigned int cantProd);
    
/**
 * @param montoFinal
 */
void set_monto_total(unsigned int montoFinal);
private: 
    unsigned int cant_de_productos;
    unsigned int IDcarrito;
    unsigned int monto_total;
    list<producto> lista_productos;
};

#endif //_CARRITO_H