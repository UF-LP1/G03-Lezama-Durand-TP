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
cotillon_establecimento::cotillon_establecimento(const string direccion, const string nombre, string horario, const unsigned int contacto,
                        list<producto> productos) : direccion(direccion), nombre(nombre), horario(horario), contacto(contacto) {

    this->productos = &productos;
}

/**
 * @return void
 */
void cotillon_establecimento::abrir() {
    cout << "el cotillon esta abierto";
    return;
}

/**
 * @param fecha
 * @return void
 */
void cotillon_establecimento::cerrar() {
    //exit; 
    return;
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
string cotillon_establecimento::get_nombre() {
    return "";
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

}

producto cotillon_establecimento::encontrar_producto(producto produc) {

    list<producto>::iterator it2;
    it2 = find_if(productos->begin(), productos->end(), produc);
    return *it2;

}