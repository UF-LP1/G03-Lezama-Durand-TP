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
unsigned int mostraddor::Get_Nrocliente(unsigned int ticket) {
    return this->NroCliente;
}

void mostraddor::LlamarCliente() {//la hacemos luego ;)

}

/**
 * @param numero
 */
void mostraddor::set_NroCliente(unsigned int numero) {
    this->NroCliente = numero;
    return;
}