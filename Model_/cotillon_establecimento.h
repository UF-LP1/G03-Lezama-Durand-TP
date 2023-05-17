/**
 * Project Untitled
 */

#include "Header.h"
#include "producto.h"
#ifndef _COTILLON_ESTABLECIMENTO_H
#define _COTILLON_ESTABLECIMENTO_H

class cotillon_establecimento {
public: 
    
/**
 * @param direccion
 * @param nombre
 * @param horario
 * @param contacto
 */
cotillon_establecimento(const string direccion, const string nombre, string horario, const unsigned int contacto, list<producto> productos);
string  abrir();
string cerrar();  
string get_horario();
string get_nombre();
unsigned int get_contacto();
string get_direccion();
 ~cotillon_establecimento();
 bool encontrar_producto(string produc);

private: 
    const string direccion;
    const string nombre;
    string horario;
    const unsigned int contacto;
    list<producto> *productos;
};

#endif //_COTILLON_ESTABLECIMENTO_H