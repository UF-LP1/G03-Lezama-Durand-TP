/**
 * Project Untitled
 */



#ifndef _REPOSTERIA_H
#define _REPOSTERIA_H

#include "producto.h"
enum class articulos { mangas = 0, picos, utensilios };

class Reposteria : public producto {

public:

    /**
     * @param stock
     * @param codigo
     * @param marca
     * @param precio_producto
     */
    Reposteria(string nom, unsigned int stock, unsigned int cod, string marca, unsigned int precio);
    ~Reposteria();
    void set_articulos(articulos art);
    articulos get_articulos();
private: 
    articulos art;
};

#endif //_REPOSTERIA_H