/*
**  André Viana Sena de Souza - 26/08/2014
**
**  Implementação do template de lista encadeada simples.
**/

template <typename T>
Lista<T>::Lista()
{
    lista = NULL;
    ultimo = NULL;
    iterador = NULL;
    contador = 0;
}

template <typename T>
Lista<T>::~Lista()
{
    Descarregar();
}

template <typename T>
void Lista<T>::Inserir(T item)
{
    if(lista == NULL)
    {
        lista = new no;
        lista->item = item;
        lista->prox = NULL;
        ultimo = lista;
    }
    else
    {
        ultimo->prox = new no;
        ultimo = ultimo->prox;
        ultimo->item = item;
        ultimo->prox = NULL;
    }
    contador++;
}

template <typename T>
void Lista<T>::Descarregar()
{
    no* d = NULL;
    while(lista!=NULL)
    {
        d = lista;
        lista = lista->prox;
        delete d;
    }
    ultimo = NULL;
    iterador = NULL;
    contador = 0;
}

template <typename T>
void Lista<T>::It_Inicio()
{
    iterador = lista;
}

template <typename T>
void Lista<T>::It_Proximo()
{
    if(iterador)
        iterador = iterador->prox;
}

template <typename T>
T* Lista<T>::Iterador()
{
    if(iterador == NULL)
        return NULL;
    else
        return &iterador->item;
}
template <typename T>
unsigned long Lista<T>::Contador()
{
    return contador;
}
