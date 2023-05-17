/**
 * Project Untitled
 */


#ifndef _REPOSTERIA_H
#define _REPOSTERIA_H

#include "producto.h"


class Reposteria: public producto {
public: 
    
/**
 * @param stock
 * @param codigo
 * @param marca
 * @param precio_producto
 */
Reposteria(string nom,unsigned int stock, unsigned int cod, string marca, unsigned int precio);
~Reposteria();
};

#endif //_REPOSTERIA_H