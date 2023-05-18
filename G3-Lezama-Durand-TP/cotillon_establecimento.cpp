/**
 * Project Untitled
 */


#include "cotillon_establecimento.h"

/**
 * cotillon_establecimento implementation
 */


/**
 * @param direccion
 * @param nombre
 * @param horario
 * @param contacto
 */

/*cotillon_establecimento operator=(const cotillon_establecimento otro) {
    cotillon_establecimento


}*/

cotillon_establecimento::cotillon_establecimento(const string direccion, const string nombre, string horario, const unsigned int contacto,
                        list<producto> productos) : direccion(direccion), nombre(nombre), horario(horario), contacto(contacto) {

    this->productos = &productos;
}

/**
 * @return void
 */
string cotillon_establecimento::abrir() {
    string texto="el cotillon esta abierto";
    return texto;
}

/**
 * @param fecha
 * @return void
 */
string cotillon_establecimento::cerrar() {
    string texto="el cotillon esta abierto";
    return texto;
}

/**
 * @return time_t
 */
string cotillon_establecimento::get_horario() {
    return this->horario;
}

/**
 * @return string
 */
string cotillon_establecimento::get_nombre(){
    return this->nombre;
}

/**
 * @return unsigned int
 */
unsigned int cotillon_establecimento::get_contacto() {
    return this->contacto;
}

/**
 * @return string
 */
string cotillon_establecimento::get_direccion() {
    return this->direccion;
}

cotillon_establecimento::~cotillon_establecimento() {

    delete productos;

}

bool cotillon_establecimento::encontrar_producto(string  produc) {

    list<producto>::iterator it = productos->begin();
    int i = 0;

    while (it != productos->end())
    {
        if (it->get_nombre() == produc)
        {
            return true;
        }
        i++;  
        it._Ptr = it._Ptr->_Next;
    }
    return false;
  
}