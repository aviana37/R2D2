#include "algoritmo.h"

/*
**CONTE conta quantos pares de numeros da lista resultam em zero quando somados.
**O algoritmo procura por numeros de sinais oposto, pois somente eles, quando somados
**ao primeiro numero, resultaram em zero.
*/
unsigned long CONTE(Lista<int>* numeros)
{
    Lista<int>* copia = new Lista<int>;
    *copia = *numeros;
    int atual, contador=0;

    for(numeros->It_Inicio(); numeros->Iterador()!=NULL; numeros->It_Proximo())
    {
        atual = *numeros->Iterador();
        for(copia->It_Inicio(); copia->Iterador()!=NULL; copia->It_Proximo())
        {
            if(*copia->Iterador() == (atual*-1))
                contador++;
        }
    }
    return contador;
}

bool VerificaPrimo(unsigned long numero)
{
    if(numero == 0 || numero == 1)
        return false;
    else
    {
        for(unsigned long c=2; c<numero; c++)
        {
            if(numero%c == 0)
                return false;
        }
        return true;
    }
}

unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior)
{
    for(long int c=limite_superior; c>1; c--)
    {
        if(VerificaPrimo(c))
            return c;
    }
    return 0;
}

Lista<unsigned long>* Algoritmo()
{
    ArquivosComputadorCentral atual=arquivo1k;
    Lista<unsigned long>* retorno = new Lista<unsigned long>;
    unsigned long QUANTIDADE;
    do
    {
        QUANTIDADE = CONTE(LEIA(atual));
        retorno->Inserir(MAIORNUMEROPRIMO(QUANTIDADE));
        atual = (ArquivosComputadorCentral)((int)atual+1);
    }while(atual<=arquivo256k);

    return retorno;
}
