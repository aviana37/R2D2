#ifndef LISTA_INCLUDED
#define LISTA_INCLUDED

/*
**  André Viana Sena de Souza - 26/08/2014
**
**  Definições da classe template de lista encadeada simples.
**/

#include <stddef.h>

template <typename T>
class Lista
{
private:
    struct no
    {
        T item;
        no* prox;
    };
    no* lista;
    no* ultimo;
    no* iterador;
    unsigned long contador;

public:
    Lista();
    ~Lista();

    void Inserir(T item);
    void Descarregar();
    void It_Inicio();
    void It_Proximo();
    T* Iterador();
    unsigned long Contador();
};

#include "lista.tpp"

#endif // LISTA_INCLUDED
