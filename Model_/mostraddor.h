/**
 * Project Untitled
 */


#ifndef _MOSTRADDOR_H
#define _MOSTRADDOR_H

#include "persona.h"


class mostraddor: public persona {
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param horario
 * @param ticket
 */
 mostraddor(string nombre, unsigned int DNI, string horario,string Contacto, unsigned int ticket);
 ~mostraddor();
/**
 * @param ticket
 */  
void LlamarCliente();
unsigned int get_NroCliente();


private: 
    unsigned int NroCliente;
    string horario;
};

#endif //_MOSTRADDOR_H