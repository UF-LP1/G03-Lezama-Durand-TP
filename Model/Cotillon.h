/**
 * Project Untitled
 */


#ifndef _COTILLON_H
#define _COTILLON_H

#include "producto.h"


class Cotillon: public producto {
public: 
    
/**
 * @param clasificacion
 * @param codigo
 * @param stock
 * @param precio
 * @param marca
 */
Cotillon(unsigned int stock, unsigned int precio, unsigned int cod, string marca);
~Cotillon();
private: 
    enum tipo_cotillon clasificacion;
};

#endif //_COTILLON_H