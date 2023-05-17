/**
 * Project Untitled
 */

#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "Header.h"

class producto {
public: 
    
/**
 * @param stock
 * @param precio
 * @param cod
 */

    producto(string nom, unsigned int stock, unsigned int precio, unsigned int cod, string marca);
    
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
string get_nombre();
void set_nombre(string nom);
void set_stock(unsigned int cant);
unsigned int eliminar_stock(unsigned int cant);

~producto();

protected: 
    unsigned int stock;
    unsigned int codigo_producto;
    unsigned int precio_producto;
    string Marca; 
    string nombre;
};

#endif //_PRODUCTO_H