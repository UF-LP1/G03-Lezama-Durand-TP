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
carrito(unsigned int cant, unsigned int monto, unsigned int ID); //constructor por parametros para inicializar las variables
carrito();//constructor por defecto que lo necesitamos en la clase cliente para que se me cree el carro automaticamente

~carrito();//destructor

unsigned int get_monto(); 
unsigned int get_cant_prod();
list<producto> get_lista();
unsigned int get_ID();
/**
 * @param montoFinal
 */
void cargarlista(producto Nombre, unsigned int cant);

private: 
    unsigned int cant_de_productos;
    unsigned int IDcarrito;
    unsigned int monto_total;
    list<producto> lista_productos;
};

#endif //_CARRITO_H