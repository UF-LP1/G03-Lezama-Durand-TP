/**
 * Project Untitled
 */

#include "Header.h"

#ifndef _PRODUCTO_H
#define _PRODUCTO_H

class producto {
public: 
    
/**
 * @param stock
 * @param precio
 * @param cod
 */

producto(unsigned int stock, unsigned int precio, unsigned int cod, string marca);
    
/**
 * @param cantidad
 * @param stock
 */
void renovar_stock(unsigned int stock);
    
unsigned int get_stock();
    
/**
 * @param codigo_producto
 */
    
unsigned int get_codigo_producto();
    
unsigned int get_precio_producto();
~producto();

protected: 
    unsigned int stock;
    const unsigned int codigo_producto;
    unsigned int precio_producto;
    string Marca; 

};

#endif //_PRODUCTO_H