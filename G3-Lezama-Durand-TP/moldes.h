/**
 * Project Untitled
 */


#ifndef _MOLDES_H
#define _MOLDES_H

#include "Reposteria.h"
#include "tipo.h"


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
 moldes(string nom, enum tipo clasificacion, unsigned int tamanio, string material, unsigned int stock, unsigned int codigo_producto, unsigned int precio, string marca);
 ~moldes();

    
/**
 * @param material
 */
void set_material(unsigned int material);
void set_tamanio(unsigned int tam);
void set_clasificacion(enum tipo clas);
string get_material();
unsigned int get_tamanio();
unsigned int get_clasificacion();

private: 
    enum tipo clasificacion;
    unsigned int tamanio;
    string material;
};

#endif //_MOLDES_H