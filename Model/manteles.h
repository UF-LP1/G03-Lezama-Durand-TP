/**
 * Project Untitled
 */


#ifndef _MANTELES_H
#define _MANTELES_H

#include "Vajilla.h"


class manteles: public Vajilla {
public: 
    
/**
 * @param tamanio
 * @param liso
 * @param decoracion
 * @param color
 * @param materia
 * @param cantidad
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */
manteles(enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad, unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca);
~manteles();
};

#endif //_MANTELES_H