/**
 * Project Untitled
 */


#ifndef _CUBIERTOS_H
#define _CUBIERTOS_H

#include "Vajilla.h"
#include"Tamanios.h"
#include"clasificacion.h"


class cubiertos: public Vajilla {
public: 
    
/**
 * @param tam
 * @param liso
 * @param decoracion
 * @param color
 * @param material
 * @param cantidad
 * @param tipo
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */

cubiertos(enum clasificacion tipo, enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad,
        unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca);
~cubiertos();
    
/**
 * @param tipo
 */
void set_tipo(enum clasificacion tipo);   
unsigned int get_tipo();
private: 
    enum clasificacion tipo;
};

#endif //_CUBIERTOS_H