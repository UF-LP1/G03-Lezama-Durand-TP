/**
 * Project Untitled
 */


#include "mostraddor.h"

/**
 * mostraddor implementation
 */


/**
 * @param nombre
 * @param DNI
 * @param horario
 * @param ticket
 */
mostraddor::mostraddor(string nombre, unsigned int DNI, string horario, string Contacto, unsigned int ticket) : persona(nombre, DNI, Contacto) {
    this->horario = horario;
    this->NroCliente = ticket;
}
mostraddor::~mostraddor(){
}
/**
 * @param ticket
 * @return unsigned int
 */

void mostraddor::LlamarCliente(){
    cout << "cliente Numero: " << this->NroCliente << endl;;
    this->NroCliente++;
}

unsigned int mostraddor::get_NroCliente()
{
    return this->NroCliente;
}


/**
 * @param numero
 */
