/**
 * Project Untitled
 */


#include "Nro Cliente.h"

/**
 * Nro Cliente implementation
 */


/**
 * @param nro
 */
Nro_Cliente::Nro_Cliente(unsigned int nro) {
    this->numero = nro;
}
Nro_Cliente::~Nro_Cliente(){
}
/**
 * @return unsigned int
 */
unsigned int Nro_Cliente::Get_numero() {
    return this->numero;
}