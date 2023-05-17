/**
 * Project Untitled
 */


#ifndef _NRO CLIENTE_H
#define _NRO CLIENTE_H

class Nro_Cliente {
public: 
    
/**
 * @param nro
 */
Nro_Cliente(unsigned int nro);
~Nro_Cliente();

unsigned int Get_numero();
private: 
    unsigned int numero;
};

#endif //_NRO CLIENTE_H