/**
 * Project Untitled
 */


#ifndef _MOLDES_H
#define _MOLDES_H

#include "Reposteria.h"


class moldes: public Reposteria {
public: 
    
/**
 * @param clasificacion
 * @param tamanio
 * @param material
 * @param stock
 * @param codigo_producto
 * @param precio
 * @param marca
 */
 moldes(enum tipo clasificacion, unsigned int tamanio, string material, unsigned int stock, unsigned int codigo_producto, unsigned int precio, string marca);
 ~moldes();
unsigned int get_tamanio();
    
/**
 * @param material
 */
void set_material(unsigned int material);
private: 
    enum tipo clasificacion;
    unsigned int tamanio;
    string material;
};

#endif //_MOLDES_H