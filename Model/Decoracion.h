/**
 * Project Untitled
 */


#ifndef _DECORACION_H
#define _DECORACION_H

#include "Reposteria.h"
#include "Reposteria.h"


class Decoracion: public Reposteria {
public: 
    
/**
 * @param stock
 * @param codigo
 * @param marca
 * @param art
 * @param precio
 */
Decoracion(unsigned int stock, unsigned int codigo, string marca, enum Decoracion_Reposteria art, unsigned int precio);
~Decoracion();
    
unsigned int get_articulo();
    
/**
 * @param tipo
 */
void set_articulo(enum Decoracion_Resposteria articulo);
private: 
    enum Decoracion_Resposteria articulo;
};

#endif //_DECORACION_H